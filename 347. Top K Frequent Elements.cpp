class Solution {
public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> a;
        for(auto& it:mp){
            a.push_back(it);
        }
        sort(a.begin(), a.end(), [](auto &left, auto &right) {return right.second < left.second;});
        for(int i=0; i<k; i++){
            ans.push_back(a[i].first);
        }
        return ans;
    }

};
