class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int>a(26,0);
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a']=i;
        }
        int ans=0;
        for(int i=0;i<t.length();i++)
        {
            int x=t[i]-'a';
            ans+=abs(i-a[x]);
        }
        return ans;
    }
};