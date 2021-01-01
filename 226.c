
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void change(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    change(root->left);
    change(root->right);
}


struct TreeNode* invertTree(struct TreeNode* root){
    change(root);
    return root;
}