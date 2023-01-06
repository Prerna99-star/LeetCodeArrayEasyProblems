class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        int i=n;
        int j=0;
        while(j<n)
        {
            arr.push_back(nums[j]);
            arr.push_back(nums[i]);
            j++;
            i++;
        }
        return arr;
    }
};
