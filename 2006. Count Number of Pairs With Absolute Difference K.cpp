class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
       /*int count=0;
       for(int i=0; i<nums.size(); i++){
           for(int j=i+1; j<nums.size(); j++){
               if(abs(nums[i]-nums[j])==k){
                   count++;
               }
           }
       }
       return count;*/
       int N = nums.size(), ans = 0, j = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < N; ) {
            int n = nums[i], cnt = 0;
            while (i < N && nums[i] == n) ++i, ++cnt;
            while (j < N && nums[j] < n + k) ++j;
            int start = j;
            while (j < N && nums[j] == n + k) ++j;
            ans += (j - start) * cnt;
        }
        return ans; 
    }
};
