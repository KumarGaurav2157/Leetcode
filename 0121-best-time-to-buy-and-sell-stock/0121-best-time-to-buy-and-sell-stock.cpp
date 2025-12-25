class Solution {
public:
    int maxProfit(vector<int>& p) {
       int maxi=0;
       int mini=INT_MAX;
       int n=p.size();
       for(int i=0;i<n;i++)
       {
        mini=min(mini,p[i]);
        maxi=max(maxi,p[i]-mini);
       } 
       return maxi;
    }
};