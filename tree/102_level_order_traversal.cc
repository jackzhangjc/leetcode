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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q, next;
        q.push(root);
        vector<vector<int>> sol;
        vector<int> row;
        if (root == NULL) return sol;
        while (!q.empty()){
            while (!q.empty()){
                TreeNode * t = q.front();
                q.pop();
                row.push_back(t -> val);
                if (t->left != NULL) next.push(t->left);
                if (t->right != NULL) next.push(t->right);
                
            }
            sol.push_back(row);
            row.clear();
            swap(next, q);
            
        }
        return sol;
    }
};