class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(nums[i])!=mpp.end())
            {
                ans=nums[i];
                break;
            }
            mpp[nums[i]]++;
        }
        return ans;
    }
};