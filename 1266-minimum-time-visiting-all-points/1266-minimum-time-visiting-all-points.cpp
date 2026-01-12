class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        int ans=0;
        int currx=p[0][0];
        int curry=p[0][1];
        for(int i=1;i<p.size();i++)
        {
            int x=p[i][0];
            int y=p[i][1];
            int t=max(abs(x-currx),abs(y-curry));
            ans+=t;
            currx=x;
            curry=y;
        }
        return ans;
    }
};