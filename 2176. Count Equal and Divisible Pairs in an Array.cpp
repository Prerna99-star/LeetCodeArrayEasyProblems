class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        /*for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]==nums[j]){
                    if((i*j)%k == 0){
                        count++;
                    }
                }
            }
        }*/
        unordered_map<int, vector<int>>mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i])!= mp.end()){
                for(auto a: mp[nums[i]]){
                    if((a*i)%k == 0){
                        count++;
                    }
                }
            }
            mp[nums[i]].push_back(i);
        }
        return count;
    }
};
