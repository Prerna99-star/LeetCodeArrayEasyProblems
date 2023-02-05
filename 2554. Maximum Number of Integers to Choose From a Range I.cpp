class Solution {
public:
    
    int maxCount(vector<int>& b, int n, int maxSum) {
        unordered_map<int, int> mp;
        int count=0;
        int sum=0;
        for(int i=0; i<b.size(); i++){
            mp[b[i]]=0;
        }
        for(int i=0; i<=n; i++){
            if((mp.count(i)==0){
                sum += i;
                if(sum<=maxSum){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;
        
    }
};
