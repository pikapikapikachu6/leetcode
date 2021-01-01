int minPartitions(char * n){
    int i = 0;
    int result = 0;
    while (n[i] != NULL) {
        int num = n[i] - 48;
        if (num > result) {
            result = num;
        }
        i ++;
    }
    return result;
}