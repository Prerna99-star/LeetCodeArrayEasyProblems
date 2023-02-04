class Solution {
public:
    TreeNode* convert(int start, int end, vector<int>& nums){
       if(start>end){
           return NULL;
       }
       int m = (start+end)/2;
       TreeNode* root = new TreeNode(nums[m]);
       root->left = convert(start, m-1, nums);
       root->right = convert(m+1, end, nums);

       return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(0, nums.size()-1, nums);
    }
};
