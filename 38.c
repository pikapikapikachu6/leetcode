char *countAndSay(int n) {
    char *result = (char*) malloc(sizeof(char) * 5000);
    char *temp = (char*) malloc(sizeof(char) * 5000);
    result[0] = '1';
    result[1] = '\0';
    for (int i = 1; i < n; i ++) {
        int j = 0;
        char key = result[0];
        int count = 0;
        char *p = result;
        while (*p != '\0') {
            if (*p == key) {
                count ++;
            } else {
                temp[j] = count + '0';
                j ++;
                count = 1;
                temp[j] = key;
                j ++;
                key = *p;
            }
            p ++;
        }
        temp[j] = count + '0';
        j ++;
        temp[j] = key;
        j ++;
        temp[j] = '\0';
        strcpy(result, temp);
    }
    return result;
}