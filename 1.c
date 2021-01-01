
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* result = NULL;

    for (int i = 0; i <numsSize - 1; i ++) {
        for (int j = i + 1; j < numsSize; j ++) {
            if (nums[i] + nums[j] == target) {
                result = malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}