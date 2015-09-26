/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (!nums.size()) return NULL;
        return build(nums, 0, nums.size()-1);
    }
    TreeNode* build(vector<int>& nums, int start, int end){
        if (end < start) return NULL;
        int n = (start + end)/2;
        TreeNode* sol = new TreeNode(nums[n]);
        sol->left = build(nums, start, n-1);
        sol->right = build(nums, n+1, end);
        return sol;
    }
    
};