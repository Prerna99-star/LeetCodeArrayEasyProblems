class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
      int i, j, w=0, wealth=0;  

      for(j=0; j<acc[0].size(); j++)
      {
          wealth += acc[0][j];
      }
      j=0;
      for(i=1; i<acc.size(); i++)
      {
          for(j=0; j<acc[0].size(); j++){
              w += acc[i][j];    
          }
          wealth = max(wealth, w);
          w=0;
      }
      return wealth;
    }
};
