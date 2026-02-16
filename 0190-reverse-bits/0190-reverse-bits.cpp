class Solution {
public:
   int i=0;
   int j=31;
   int ans=0;
    int reverseBits(int n) {
        while(i<32)
        {
            int bit=1&(n>>i);
            if(bit==1)
            ans+=pow(2,j);
            i++;
            j--;
        }
        return ans;
    }
};