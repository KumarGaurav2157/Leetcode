class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int i=0,j=0;
        int n=A.size();
        vector<int>ans(n,0);
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
             mpp[A[i]]++;
             int count=0;
             for(int j=0;j<=i;j++)
             {
                if(mpp.find(B[j])!=mpp.end())
                count++;
             }
             ans[i]=count;
        }
        return ans;
    }
};