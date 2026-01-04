class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        ans=0
        n=len(nums)
        for i in  range(len(nums)+1):
            ans^=i
            i+=1
        j=0
        while j<len(nums):
            ans^=nums[j]
            j+=1
        return ans
       



        