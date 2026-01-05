class Solution:
    def calc(self,i,dp,coins,amount):
        if(amount==0):
            return 0
        if(i==0):
            if(amount%coins[0]==0):
                return amount//coins[0]
            else:
                return 10**9
        if(dp[i][amount]!=-1):
            return dp[i][amount]
        nt=self.calc(i-1,dp,coins,amount)
        t=10**9
        if(amount>=coins[i]):
            t=1+self.calc(i,dp,coins,amount-coins[i])
        dp[i][amount]=min(t,nt)
        return dp[i][amount]
            

            
           

      

    def coinChange(self, coins: List[int], amount: int) -> int:
        n=len(coins)
        dp=[[-1]*(amount+1) for _ in range(n)]
        z=self.calc(n-1,dp,coins,amount)
        if(z==1e9):
            return -1
        return z

        

        