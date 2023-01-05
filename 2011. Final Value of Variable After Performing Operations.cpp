class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int x=0;
        for(int i=0; i<o.size(); i++)
        {
            if(o[i]=="++X" || o[i]=="X++")
            {
                x++;
            }
            else if(o[i]=="--X" || o[i]=="X--")
            {
                x--;
            }
        }
        return x;
    }
};
