class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
      vector<int>ans;
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
        int x=(i+nums[i])%n;
        if(x<0)
        x+=n;
        ans.push_back(nums[x]);
      }
      return ans;

           
       }
};