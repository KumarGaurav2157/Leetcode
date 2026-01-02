class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n = s.length();
        for (int i = n - 1; i >= 0; i--) 
        {
            if (s[i] != ' ') 
            {
            string temp;
         while (i >= 0 && s[i] != ' ')
          {     
         temp += s[i];
          i--;
          }
          reverse(temp.begin(), temp.end());  
                ans += temp + ' ';  
            }
        }
        if (!ans.empty()) {
            ans.pop_back(); 
        }
        return ans;
    }
};