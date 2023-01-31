class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans;
       sort(nums.begin(), nums.end());

       if(nums.size()<3) {return ans;}

       for(int a=0; a<nums.size()-2; a++){
           if(a==0 || nums[a]!=nums[a-1]){
               int b=a+1, c=nums.size()-1, sum=-nums[a];
               while(b<c){
                   if(nums[b]+nums[c]==sum){
                       ans.push_back({nums[a], nums[b], nums[c]});
                       while(c>b && nums[b]==nums[b+1]){
                           b++;
                       }
                       while(c>b && nums[c]==nums[c-1]){
                           c--;
                       }
                       c--;
                       b++;
                   }
                   else if(nums[b]+nums[c]<sum){
                       b++;
                   }
                   else{
                       c--;
                   }
               }
           }
       }
       return ans; 
    }
};
