class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int>ans;
        int carry=1;
        int n=d.size();
        for(int i=n-1;i>=0;i--)
        {
            int x=d[i]+carry;
            ans.push_back(x%10);
            carry=x/10;
        }
        if(carry)
        ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;

    }
};