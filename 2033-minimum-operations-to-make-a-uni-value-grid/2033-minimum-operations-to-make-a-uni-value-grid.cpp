class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int rem=(grid[0][0])%x;
        vector<int>temp;
        for(int i=0;i<grid.size();i++)
        {
             for(int j=0;j<grid[i].size();j++)
             {
                
                int y=grid[i][j];
                temp.push_back(y);
                if(y%x!=rem)
                return -1;
             }
        }
        sort(temp.begin(),temp.end());
        int l=temp.size();
        int m=temp[l/2];
        int count=0;
        for(int i=0;i<l;i++)
        {
            count+=(abs(temp[i]-m))/x;
        }
        return count;
    }
};