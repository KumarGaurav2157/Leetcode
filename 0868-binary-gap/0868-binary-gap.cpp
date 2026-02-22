class Solution {
public:
    int binaryGap(int n) {
      int last=-1;
      int curr=0;
      int i=0;
      int ans=0;
      while(i<32)
      {
        if((n>>i)&1)
        {
            curr=i;
            if(last!=-1)
            {
                ans=max(ans,curr-last);
                last=i;
            }
             if(last==-1)
             last=i;

        }
        i++;
        
      }
      return ans;

    }
};