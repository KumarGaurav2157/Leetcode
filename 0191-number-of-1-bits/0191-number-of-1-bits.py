class Solution:
    def hammingWeight(self, n: int) -> int:
        i=0
        ans=0
        while i<32:
            j=(n>>i)&1
            ans+=j
            i+=1
        return ans

        