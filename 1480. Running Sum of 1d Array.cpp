class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum=0, i;
        for(i=0; i<nums.size(); i++)
        {
            sum = sum + nums[i];
            result.push_back(sum);
        }
        return result;
    }
};
