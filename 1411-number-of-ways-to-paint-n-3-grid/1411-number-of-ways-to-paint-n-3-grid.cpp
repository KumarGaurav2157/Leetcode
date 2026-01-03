class Solution {
public:
int mod=1e9+7;
vector<string>ch={"r","g","b"};
void tot(string curr,string prev,vector<string>&combo,int len)
{
    if(len==3)
    {
        combo.push_back(curr);
        return ;
    }
    for(auto it:ch)
    {
        if(it==prev)
        continue;
        tot(curr+it,it,combo,len+1);
    }
}
int calc(vector<vector<int>>&dp,vector<string>&combo,int prev,int n,int curr)
{
    if(curr==n)
    return 1;
    if(dp[prev+1][curr]!=-1)
    return dp[prev+1][curr];
    int res=0;
    for(int i=0;i<combo.size();i++)
    {
        if(i==prev)
        continue;
        else if(prev==-1)
        res=(res+calc(dp,combo,i,n,curr+1))%mod;
        else
        {
            int flag=1;
            for(int j=0;j<combo[i].length();j++)
            {
                if(combo[i][j]==combo[prev][j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            res=(res+calc(dp,combo,i,n,curr+1))%mod;

        }

    }
    return dp[prev+1][curr]=res;
}

    int numOfWays(int n) {
        vector<string>combo;
        string curr;
        tot(curr,"-1",combo,0);
        int k=combo.size();
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        return calc(dp,combo,-1,n,0);


    }
};