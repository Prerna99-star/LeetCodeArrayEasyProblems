class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int w = 0;
        for(int i=0; i<sentences.size(); i++)
        {
            int c=0;
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    c++;
                }
                if(w<c){
                    w = c;
                }
            }
        }
        return w+1;
    }
};
