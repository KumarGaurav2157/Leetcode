class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int last=0;
        int n=bits.size();
        int i=0;
        while(i<n)
        {
            if(bits[i]==1)
            {
                last=2;
                i+=2;
            }
            else
            {
                last=1;
                i+=1;
            }
        }
        if(last==1)
        return true;
        else
        return false;

    }
};