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
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN , LONG_MAX);
    }
    bool isValid(TreeNode* root, long minv, long maxv){
        if (root == NULL) return true;
        if ((long)root->val <= minv || (long)root -> val >= maxv) 
            //if (root -> val != INT_MIN && root->val != INT_MAX)
                return false;
        return isValid(root->left, minv, root->val) && isValid(root->right, root->val, maxv);
    }
};