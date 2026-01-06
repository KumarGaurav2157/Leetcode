class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(in.begin(), in.end());
        ans.push_back({in[0][0], in[0][1]});
        for (int i = 1; i < in.size(); i++) {
            vector<int> last = ans.back();
            if (last[1] >= in[i][0]) {
                ans.pop_back();
                ans.push_back({last[0], max(last[1], in[i][1])});
            } else {
                ans.push_back({in[i][0], in[i][1]});
            }
        }
        return ans;
    }
};
