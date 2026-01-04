class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr=0
        maxi=-10000000
        n=len(nums)
        for i in range(n):
            if(curr+nums[i]<nums[i]):
                curr=nums[i]
            else:
                curr+=nums[i]
            maxi=max(maxi,curr)
        return maxi
        