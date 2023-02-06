class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int>ans;
       int m=1;
      int countZ = count(nums.begin(), nums.end(), 0);
      for(int i=0; i<nums.size(); i++){
          if(nums[i]){
             m *= nums[i];
          }
      }
      if(countZ == 0){
          for(int i=0; i<nums.size(); i++){
              ans.push_back(m/nums[i]);
          }
      }
      else if(countZ>1){
          for(int i=0; i<nums.size(); i++){
              ans.push_back(0);
      }
      }
      else if(countZ == 1){
          for(int i=0; i<nums.size(); i++){
              if(nums[i]==0){
                  ans.push_back(m);
              }
              else{
                  ans.push_back(0);
              }
          }
      }
      return ans;
    }


};
