
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int traverse (struct TreeNode* root,int* sum) {
    if (root == NULL) return 0;
    int left = traverse(root->left,sum);
    int right = traverse(root->right, sum);
    *sum = *sum + abs(left - right);
    return root->val + left + right;
}

int findTilt(struct TreeNode* root){
    int result = 0;
    traverse(root, &result);
    return result;
}