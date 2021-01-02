/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){
    if (nums == NULL || returnSize == NULL) return NULL;
    int *result = (int*)malloc(sizeof(int) * (numsSize - k + 1));
    int *queue = (int*)malloc(sizeof(int) * numsSize);
    int start = 0;
    int end = 0;
    int i = 0;
    int j = 0;
    while (i < numsSize) {
        while (start != end && nums[i] > nums[queue[end - 1]]) {
            end = end - 1;
        }
        queue[end] = i;
        end = end + 1;
        if (i >= k - 1) {
            result[i - k + 1] = nums[queue[start]];
            if (start != end && queue[start] <= (i - k + 1)) {
                start = start + 1;
            }
        }
        i = i + 1;
    }
    free(queue);
    *returnSize = numsSize - k + 1;
    return result;
}