/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* makeTree(int *nums, int start, int end){
    if (start > end) return NULL;
    int mid = start + (end - start) / 2;
    struct TreeNode* new = malloc(sizeof(struct TreeNode));
    new->val = nums[mid];
    new->left = makeTree(nums, start, mid - 1);
    new->right = makeTree(nums, mid + 1, end);
    return new;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    if (numsSize == 0) return NULL;
    return makeTree(nums, 0, numsSize - 1);
}