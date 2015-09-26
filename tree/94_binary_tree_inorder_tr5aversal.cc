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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> sol;
        while (!s.empty() || (root != NULL)){
            if (root != NULL){
                s.push(root);
                root = root -> left;
            } else {
                root = s.top();
                s.pop();
                sol.push_back(root -> val);
                //s.push(root -> right);
                root = root -> right;

            }
        }
        return sol;
    }
};