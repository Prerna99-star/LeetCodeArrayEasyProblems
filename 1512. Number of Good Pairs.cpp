class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     int g=0;
     /*for(int i=0; i<nums.size(); i++)
     {
         for(int j=i+1; j<nums.size(); j++)
         {
             if(nums[i]==nums[j])
             {
                 g++;
             }
         }
     }
     return g;*/

     unordered_map<int, int> ans;
     for(int i=0; i<nums.size(); i++)
     {
         ans[nums[i]]++;
     }
     for(auto n : ans)
     {
         int val = n.second;
         g = g + (val*(val-1))/2 ;
     }
     return g;
    }
};
