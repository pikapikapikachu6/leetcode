/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    if (root == NULL) {
        return 0;
    }
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if (right == 0) {
        return left + 1;
    } 
    if (left == 0) {
        return right + 1;
    }
    if (left < right) {
        return left + 1;
    } else {
        return right + 1;
    }
}