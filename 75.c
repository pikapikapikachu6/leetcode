void sortColors(int* nums, int numsSize){
    int zero = 0, one = 0;
    int i = 0;
    for (i = 0; i < numsSize; i ++) {
        if (nums[i] == 0) {
            zero ++;
        } else if (nums[i] == 1) {
            one ++;
        }
    }
    for (i = 0; i < zero; i ++) {
        nums[i] = 0;
    }
    for (i = zero; i < zero + one; i ++) {
        nums[i] = 1;
    }
    for (i = zero + one; i < numsSize; i ++) {
        nums[i] = 2;
    }
    return nums;
}