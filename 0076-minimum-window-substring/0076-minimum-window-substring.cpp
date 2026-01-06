class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mpp;
        for(int i=0;i<t.length();i++)
        mpp[t[i]]++;
        int left=0;
        int len=t.length();
        int mini=INT_MAX;
        int start;
        for(int i=0;i<s.length();i++)
        {
            if(mpp[s[i]]>0)
            len--;
            while(len==0)
            {
                if((i-left+1)<mini)
                {
                    mini=i-left+1;
                    start=left;
                }
                mpp[s[left]]++;
                if(mpp[s[left]]>0)
                len++;
                left++;
            }
            mpp[s[i]]--;
           
        }
        return mini == INT_MAX ? "" : s.substr(start, mini);
        

        
    }
};