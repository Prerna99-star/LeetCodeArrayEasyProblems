class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i+=2){
            /*int c= nums[i];
            while(c){
                ans.push_back(nums[i+1]);
                c--;
            }*/

            ans.insert(ans.end(), nums[i], nums[i+1]);
        }
        return ans;
        
    }
};
