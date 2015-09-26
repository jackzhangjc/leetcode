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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        if (!root->left && !root->right) return 1;
        int m = INT_MAX;
        if (root->left) m = minDepth(root->left);
        if (root->right) m = min(m, minDepth(root->right));
        return m+1;
    }
};