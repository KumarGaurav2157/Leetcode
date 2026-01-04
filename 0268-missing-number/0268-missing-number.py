class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        v=[-1]*(n+1)
        i=0
        while(i<n):
            v[nums[i]]=nums[i]
            i+=1
        ans=0
        j=0
        while j<n+1:
            if v[j]==-1:
                ans=j
                break
            j+=1
        return ans



        