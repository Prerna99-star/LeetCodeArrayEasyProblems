class Solution {
public:
    /*void permutations(vector<vector<int>>&ans, vector<int>&nums, int s, int e)
    {
      if(s==e){
          ans.push_back(nums);
      }
      for(int i=s; i<=e; i++){
          swap(nums[s], nums[i]);
          permutations(ans, nums, s+1, e);
          swap(nums[s], nums[i]);
      }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size()-1;
        permutations(ans, nums, 0, n);
        return ans;
    }*/
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        ans.push_back(nums);
        while(next_permutation(nums.begin(), nums.end())){
            ans.push_back(nums);
        }
        return ans;
    }

};
