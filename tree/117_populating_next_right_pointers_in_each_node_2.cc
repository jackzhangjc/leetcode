/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        TreeLinkNode* prev = NULL;
        TreeLinkNode* next = NULL;
        while (root){
            while (root){
                if (!next) {
                    if (root -> left) next = root->left;
                    else next = root->right;
                }
                if (root->left) {
                    if (prev) prev->next = root->left;
                    prev = root->left;
                }
                if (root->right){
                    if (prev) prev->next = root->right;
                    prev = root->right;
                }
                root = root->next;
            }
            root = next;
            prev = NULL;
            next = NULL;
        }
    }
};