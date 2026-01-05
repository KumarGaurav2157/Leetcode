class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mpp;
        int last=0;
        int maxi=0;
        for(int i=0;i<s.length();i++)
        {
            if(mpp.find(s[i])!=mpp.end() && mpp[s[i]]>=last)
            {
                last=mpp[s[i]]+1;

            }
            maxi=max(maxi,i-last+1);
            mpp[s[i]]=i;

        }
        return maxi;
    }
};