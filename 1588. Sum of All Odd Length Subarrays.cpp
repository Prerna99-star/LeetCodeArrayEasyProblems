class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int l = arr.size();
        for(int i=0; i<l; i++)
        {
            /*for(int j=i; j<arr.size(); j += 2){
                for(int k = i; k<=j; k++){
                    sum += arr[k];
                }
            }*/
            sum += (((i+1)*(l- i)+1)/2)*arr[i];
        }
        return sum;
    }
};
