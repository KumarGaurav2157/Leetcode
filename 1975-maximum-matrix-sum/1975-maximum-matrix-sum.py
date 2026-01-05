class Solution:
    def maxMatrixSum(self, nums: List[List[int]]) -> int:
        mini=float("inf")
        sum=0
        i=0
        count=0
        for i in range(len(nums)):
            j=0
            for j in range(len(nums[0])):
                sum+=abs(nums[i][j])
                mini=min(mini,abs(nums[i][j]))
                if(nums[i][j]<0):
                    count+=1
        if((count%2)!=0):
            sum-=2*mini
        return sum
        
        