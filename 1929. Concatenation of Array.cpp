class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int l=nums.size();
        nums.resize(2*l);
        
        for(int i=0; i<l; i++)
        {
            nums[i+l] = nums[i];
        }
        
        return nums;
        
    }
};
