class Solution {
public:
    bool check(vector<int>& nums) {
      int n=nums.size();
      int x=0;
      for(int i=1;i<n;i++)
      {
        if(nums[i]<nums[i-1] && x==1)
        return false;
          if(nums[i]<nums[i-1])
          x=1;
          if(x==1 && nums[i]>nums[0])
          return false;

      }  
      return true;
    }
};