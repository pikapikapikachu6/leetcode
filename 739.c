
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* T, int TSize, int* returnSize){
    *returnSize = TSize;
    int stack[TSize];
    int count = 0;
    int* result = malloc(TSize * sizeof(int));
    for (int i = 0; i < TSize; i ++) {
        while (count > 0) {
            if (T[i] > T[stack[count - 1]]) {
                result[stack[count - 1]] = i - stack[count - 1];
                count --;
            } else {
                break;
            }     
        }
        stack[count] = i;
        count ++;    
    }
    while (count > 0) {
        result[stack[count - 1]] = 0;
        count --;
    }
    return result;
}