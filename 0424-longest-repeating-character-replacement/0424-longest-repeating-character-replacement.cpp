class Solution {
public:
    int characterReplacement(string s, int k) {
        int mx=0;
        for(int i=0;i<26;i++)
        {
            char x='A'+i;
            int left=0;
            int maxi=0;
            int y=k;
            for(int j=0;j<s.length();j++)
            {
               if(s[j]!=x)
               {
                if(y==0)
                {
                   while(s[left]==x)
                   left++;
                   left++;
                }
                else
                y--;
               }
               maxi=max(maxi,j-left+1);

            }
            mx=max(mx,maxi);
        }
        return mx;
    }
};