class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>&p, string s) {
            vector<int>ans;
        for(int i=0;i<s.length();i++)
        {
            int j=i;
            int x=p[0];
            int y=p[1];
            for(;j<s.length();j++)
            {
                 if(s[j]=='R')
                 {
                      y++;
                 }
                 if(s[j]=='U')
                 {
                    x--;
                 }
                 if(s[j]=='L')
                 {
                    y--;
                 }
                 if(s[j]=='D')
                 {
                    x++;
                 }
                 if(x<0||y<0||x>=n||y>=n)
                 break;
            }
            ans.push_back(j-i);
        }
        return ans;
    }
};