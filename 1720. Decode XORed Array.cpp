class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr = {first};
        for(int&a : encoded){
            arr.push_back(first ^= a);
        }
        return arr;
    }
};
