class Solution {
public:
    int missVal(vector<int>& nums, int n){
        int total = n*(n+1)/2;
        for(int i=0; i<n; i++){
            total -= nums[i];
        }
        return total;
    }
    int missingNumber(vector<int>& nums) {
        int miss = missVal(nums, nums.size());
        return miss;
    }
};
