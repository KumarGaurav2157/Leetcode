class Solution {
public:
  int calc(int i,int j,string &s,string &t,vector<vector<int>>&dp)
  {
    if(i<0 || j<0)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int c1=0,c2=0,c3=0;
    if(s[i]==t[j])
    return dp[i][j]=1+calc(i-1,j-1,s,t,dp);
    c2=calc(i-1,j,s,t,dp);
    c3=calc(i,j-1,s,t,dp);
   return  dp[i][j]=max(c2,c3);

  }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
       return  calc(n-1,m-1,text1,text2,dp);

    }
};