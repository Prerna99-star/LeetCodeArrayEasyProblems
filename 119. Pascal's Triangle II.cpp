class Solution {
public:
    vector<int> getRow(int row) {
        vector<int>prev(row+1);
        vector<int>curr(row+1);
        prev[0]=1;
        for(int i=1;i<=row;i++){
            for(int j=0;j<=i;j++){
                curr[j] = (j-1<0 ? 0: prev[j-1]) + prev[j];
            }
            prev=curr;
        }
        return prev;
        
    }
};
