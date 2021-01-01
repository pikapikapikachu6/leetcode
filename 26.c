int removeDuplicates(int* nums, int numsSize){
    int i = 0; 
    if (numsSize == 0) return numsSize;
    for (int j = 1; j < numsSize; j ++) {
        if (nums[j] != nums[i]) {
            nums[i + 1] = nums[j];
            i ++;
        }
    }
    return i + 1;
}