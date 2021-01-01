int searchInsert(int* nums, int numsSize, int target){
    int result = -1;
    int i = 0;
    if (nums[0] > target) {
        result = 0;
    } else if (nums[numsSize - 1] < target) {
        result = numsSize;
    } else {
        while (i < numsSize) {
            if (nums[i] == target) {
                result = i;
                break;
            } 
            if ((nums[i] < target) && (nums[i+1] > target)) {
                result = i + 1;
                break;
            }
            i ++;
        }
    }
    return result;
}