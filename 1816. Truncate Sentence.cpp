class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0, i=0;
        string ans="", temp="";
        while(count<k && i<=s.size()){
            if(s[i] != ' '){
                temp += s[i];
            }
            else{
                ans += temp;
                temp ="";
                if(count<k-1){
                    ans += ' ';
                }
                count++;
            }
            if(i==s.size()-1){
                ans += temp;
            }
            i++;
        }

        return ans;
    }
};
