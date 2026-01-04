class Solution:
    def countBits(self, n: int) -> List[int]:
        ans=[]
        i=0
        for i in range(n+1):
            curr=0
            j=0
            while j<32:
                r=(i>>j)&1
                curr+=r
                j+=1
            ans.append(curr)
        return ans
        