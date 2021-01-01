/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int nodeCount(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    } else {
        return nodeCount(root->left) + nodeCount(root->right) + 1;
    }
}

void inorderTraverse (struct TreeNode* root, int *i, int *result) {
    if (root == NULL) {
        return;
    }
    inorderTraverse(root->left, i, result);
    result[*i] = root->val;
    (*i)++;
    inorderTraverse(root->right, i, result);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = nodeCount(root);
    int *result = malloc(* returnSize * sizeof(int));
    int i = 0;
    inorderTraverse(root, &i, result);
    return result;
}