class Solution {
public:
int n;
int m;
 vector<int>dx={-1,1,0,0};
vector<int>dy={0,0,-1,1};
bool dfs(int i,int j,vector<vector<int>>&grid)
{
    if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]==1)
    return false;
    if(i==grid.size()-1)
    return true;
    grid[i][j]=1;
    for(int k=0;k<4;k++)
    {
        int x=dx[k]+i;
        int y=dy[k]+j;
        if(dfs(x,y,grid))
        return true;
    }
    return false;
}
bool isreach(int day,vector<vector<int>>&cells)
{
    vector<vector<int>>grid(n,vector<int>(m,0));
    for(int i=0;i<day;i++)
    {
        int u=cells[i][0];
        int v=cells[i][1];
        grid[u-1][v-1]=1;
    }
    for(int i=0;i<m;i++)
    {
        if(grid[0][i]==0)
        {
            if(dfs(0,i,grid))
            return true;
        }
    }
    return false;
}
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        n=row;
        m=col;
        int last=-1;
        int l=0;
        int r=cells.size()-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(isreach(m,cells))
            {
                last=m;
                l=m+1;
            }
            else
            r=m-1;
        }
        return last;
    }
};