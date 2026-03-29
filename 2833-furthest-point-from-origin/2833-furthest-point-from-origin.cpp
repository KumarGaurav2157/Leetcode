class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
      int dis=0;
      int dash=0;
      int n=moves.length();
      for(int i=0;i<n;i++)
      {
        if(moves[i]=='L')
        dis--;
       else if(moves[i]=='R')
        dis++;
        else
        dash++;
      } 
      dis=abs(dis);
      dis+=dash;
      return dis;
    }
};