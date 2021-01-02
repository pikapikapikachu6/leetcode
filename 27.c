int removeElement(int* nums, int numsSize, int val){
    if (nums == NULL) return 0;
    int len = numsSize;
    int i = 0;
    int j = 0;
    for (i,j; i < len; i ++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j ++;
        }
    }
    return j;
}