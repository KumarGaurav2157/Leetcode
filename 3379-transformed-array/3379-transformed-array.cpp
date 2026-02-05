class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
       vector<int>ans;
       int n=nums.size();
       for(int i=0;i<nums.size();i++)
       {
          
           if(nums[i]>0)
           {
            ans.push_back(nums[(i+nums[i])%n]);

           }
           else if(nums[i]<0)
           {
             int x=abs(nums[i])%n;
             if((i-x)>=0)
             ans.push_back(nums[i-x]);
             else
             ans.push_back(nums[n-(x-i)]);
           }
           else
           ans.push_back(nums[i]);
       }
       return ans;

           
       }
};