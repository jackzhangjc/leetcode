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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> sol;
        vector<int> t;
        generate(root, sum, t, sol);
        return sol;
    }
    void generate(TreeNode* root, int sum, vector<int> v, vector<vector<int>>& sol){
        if (!root) return;
        if (!root->left && !root->right){
            if (sum == root->val){
                v.push_back(root->val);
                sol.push_back(v);
                return;
            }
        }
        v.push_back(root->val);
            generate(root->left, sum - root->val, v, sol);
            generate(root->right, sum - root->val, v, sol);
        
    }
    
};