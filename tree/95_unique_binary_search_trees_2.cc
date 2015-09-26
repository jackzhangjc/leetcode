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
    vector<TreeNode*> generateTrees(int n) {
        return generate(1, n);
    }
    vector<TreeNode*> generate(int i, int j){
        vector<TreeNode*> cur;
        if (i > j) {
            cur.push_back(NULL);
            return cur;
        }
        for (int k = i; k <= j; k++){
            vector<TreeNode*> left = generate(i, k - 1);
            vector<TreeNode*> right = generate(k+1, j);
            for (int x = 0; x < left.size(); x++){
                for (int y = 0; y < right.size(); y++){
                    TreeNode* a = new TreeNode(k);
                    a->left = left[x];
                    a->right = right[y];
                    cur.push_back(a);
                }
            }
        }
        return cur;
    }
};