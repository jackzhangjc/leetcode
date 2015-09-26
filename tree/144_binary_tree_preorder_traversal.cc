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
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> result;
        stack<TreeNode*> mystack; 
        mystack.push(root);
        TreeNode* current = mystack.top();
        
        while ((!mystack.empty()) && (current != NULL)) {
            current = mystack.top();
            mystack.pop();
            result.push_back(current->val);

            if (current->right != NULL)
                mystack.push(current->right);
            if (current->left != NULL)
                mystack.push(current->left);
            }
        
        return result;
    }
};