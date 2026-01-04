class Solution:
    def maxArea(self, nums: List[int]) -> int:
        n=len(nums)
        i=0
        j=n-1
        maxi=float("-inf")
        while i<j:
            maxi=max(maxi,min(nums[i],nums[j])*(j-i))
            if(nums[i]<=nums[j]):
                i+=1
            else:
                j-=1
        return maxi

           

        