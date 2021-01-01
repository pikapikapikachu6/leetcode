/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int traverse(struct TreeNode* root, int val) {
    if (root == NULL) return true;
    if (root->val != val) return false;
    return traverse(root->left,val) && traverse(root->right,val);
}

bool isUnivalTree(struct TreeNode* root){
    return traverse(root, root->val);
}
