class Solution {
public:
    int trap(vector<int>& h) {
         int n=h.size();
        vector<int>p(n,0);
        vector<int>s(n,0);
        p[0]=h[0];
        s[n-1]=h[n-1];
        for(int i=1;i<n;i++)
        p[i]=max(p[i-1],h[i]);
        for(int i=n-2;i>=0;i--)
        s[i]=max(s[i+1],h[i]);
        int t=0;
        for(int i=0;i<n;i++)
        {
            if(h[i]<s[i] && h[i]<p[i])
            t+=min(p[i],s[i])-h[i];
        }
        return t;
    }
};