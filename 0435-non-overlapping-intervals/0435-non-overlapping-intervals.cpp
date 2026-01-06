class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int e=in[0][1];
        int count=0;
        for(int i=1;i<in.size();i++)
        {
            if(in[i][0]<e)
            {
                e=min(e,in[i][1]);
                count++;
            }
            else
            e=in[i][1];
        }
        return count;
    }
};