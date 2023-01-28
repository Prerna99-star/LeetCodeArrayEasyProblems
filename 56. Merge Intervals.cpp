class Solution {
public:
    bool doesIntervalsOverlap(vector<int>& a, vector<int>& b) {
        return min(a[1], b[1]) - max(a[0], b[0]) >= 0;
    }

     vector<int> mergeIntervals(vector<int>& a, vector<int>& b) {
        return {min(a[0], b[0]), max(a[1], b[1])};
    }
    vector<vector<int>> merge(vector<vector<int>>& inv) {
       int n=inv.size();
        vector<vector<int>>v;
        int i=0;
        sort(inv.begin(),inv.end());
        while(i<n){
            vector<int>curr=inv[i++];
            vector<int>merge=curr;
           while(i<n and doesIntervalsOverlap(curr,inv[i])){
               merge=mergeIntervals(curr,inv[i]);
               curr=merge;
               i++;
           }
           v.push_back(merge);
        }
        return v;
    }
};
