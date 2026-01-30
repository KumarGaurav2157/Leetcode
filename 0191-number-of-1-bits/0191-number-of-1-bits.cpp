class Solution {
public:
    int hammingWeight(int n) {
        int i=0;
        int ans=0;
        while(i<32)
        {
           ans+=(n>>i)&1;
           i++;
        }
        return ans;
    }
};