lass Solution {
public:
    int rev(int x){
        int r=0;
        int n = x;
        while(n>0){
            r = r*10 + n%10;
            n = n/10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int count = 0, y = 1e9 + 7;
        unordered_map<int, int> m;
        for(int& n: nums){
            count = (count + m[n - rev(n)]++) % y;
        }
        return count;
    }
};
