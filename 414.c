int thirdMax(int* nums, int numsSize){
    long long int first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
    for (int i = 0; i < numsSize; i ++) {
        if (nums[i] >= third) {
            if (nums[i] == first) {
                continue;
            } 
            if (nums[i] == second) {
                continue;
            }
            if (nums[i]  > second) {
                if (nums[i] > first) {
                    third = second;
                    second = first;
                    first = nums[i];
                } else {
                    third = second;
                    second = nums[i];
                }
            } else {
                third = nums[i];
            }
        }
    }
    if (third != LONG_MIN) {
        return third;
    } else {
        return first;
    }
}