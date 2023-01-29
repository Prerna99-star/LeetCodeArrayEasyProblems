class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        vector<string> list(strs);
        for(string &s: list){
            sort(s.begin(), s.end());
        }
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<strs.size(); i++){
            mp[list[i]].push_back(strs[i]);
        }
        for(auto it: mp){
            anagrams.push_back(it.second);
        }
        return anagrams;
    }
};
