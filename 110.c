/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int height(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);
    if (left_height >right_height) {
        return left_height + 1;
    } else {
        return right_height + 1;
    }
}
bool isBalanced(struct TreeNode* root){
    if (root == NULL) {
        return true;
    }
    int left = height(root->left);
    int right = height(root->right);
    if (abs(left - right) <= 1) {
        return isBalanced(root->left) && isBalanced(root->right);
    } else {
        return false;
    }
}