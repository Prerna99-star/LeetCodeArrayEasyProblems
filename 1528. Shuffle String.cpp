class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string Sfst=s;
        for(int i=0; i<s.size(); i++){
            Sfst[indices[i]] = s[i];
        }
        return Sfst;
    }
};
