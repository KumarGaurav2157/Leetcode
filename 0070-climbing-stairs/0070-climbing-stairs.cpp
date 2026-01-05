class Solution {
public:
 /* void climb(int &count,int n,int i)
  {
    if(i==n)
    count++;
    if(i+1<=n)
    climb(count,n,i+1);
    if(i+2<=n)
    climb(count,n,i+2);
  }
  */
    int climbStairs(int n) {
    vector<int>dp(n+1,-1);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    dp[i]=dp[i-1]+dp[i-2];
    return dp[n];
    }
};