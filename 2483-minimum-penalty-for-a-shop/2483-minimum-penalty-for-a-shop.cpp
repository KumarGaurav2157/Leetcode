class Solution {
public:
    int bestClosingTime(string c) {
        int n=c.length();
        int cnt=0;
        int cnt2=0;
        vector<int>f(n+1,0);
        vector<int>b(n+1,0);
        for(int i=0;i<n;i++)
        {
             f[i]=cnt;
            if(c[i]=='N')
              cnt++;
        }
        f[n]=cnt;
        b[n]=0;
        for(int i=n-1;i>=0;i--)
        {
            if(c[i]=='Y')
            cnt2++;
            b[i]=cnt2;
        }
        int mini=INT_MAX;
        int idx=0;
        for(int i=0;i<=n;i++)
        {
            if(mini>(b[i]+f[i]))
          {
            idx=i;
            mini=b[i]+f[i];
          }
        }
        return idx;
    }
};