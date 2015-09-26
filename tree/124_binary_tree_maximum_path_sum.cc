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
    int maxPathSum(TreeNode* root) {
        int m = INT_MIN;
        dfs(root, m);
        return m;
    }
    int dfs(TreeNode* root, int& m){
        if (!root) return 0;
        int left = dfs(root->left, m);
        int right = dfs(root->right, m);
        int sum = root -> val;
        if (left > 0) sum += left;
        if (right > 0) sum += right;
        m = max(m, sum);
        left = max(left, right);
        if (left < 0) sum = root->val;
        else sum = root->val + left;
        return sum;
    }
};