int max(int num1, int num2) {
    return num1 > num2 ? num1:num2;
}

int min (int num1, int num2) {
    return num1 < num2 ? num1:num2;
}
int maxProduct(int* nums, int numsSize){
    int max_val = INT_MIN;
    int max_product = 1, min_product = 1;

    for (int i = 0; i < numsSize; i ++) {
        int min_temp = min_product * nums[i];
        int max_temp = max_product * nums[i];
        min_product = min(nums[i],min(min_temp, max_temp));
        max_product = max(nums[i],max(min_temp, max_temp));
        
        max_val = max(max_product, max_val);
    }
    return max_val;
}