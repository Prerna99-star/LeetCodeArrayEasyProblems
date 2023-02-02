class Solution {
public:
    void Parenthesis(vector<string>&str, string s, int n, int o, int c){

     if(c>=o && o==n){
         str.push_back(s);
     }
     if(o<n){
             s.push_back('(');
             Parenthesis(str, s, n, o+1, c);
             s.pop_back();
         }
    if(o>c){
             s.push_back(')');
             Parenthesis(str,s, n, o, c+1);
         }
         
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        if(n>0){
            s += '(';
        }
        Parenthesis(ans, s, n, 1, 0);
        return ans;
    }
};
