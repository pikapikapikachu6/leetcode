char * longestCommonPrefix(char ** strs, int strsSize){
    char *result;
    char store[1000]={};
    int i = 0;
    while (strsSize > 0) {
        if (strsSize == 1) return strs[0];
        char cur = strs[0][i];
        int res = 0;
        int euqal = 0;
        for (int j = 1; j < strsSize; j ++) {
            if (strcmp(strs[0], strs[j]) != 0) euqal = 1;
        }
        if (euqal == 0) return strs[0];
        for (int j = 1; j < strsSize; j ++) {
            if (strs[j][i] != cur ) res = 1;
        }
        if (res == 0) store[i] = cur;
            else {
                result = store;
                return result;
            }
        i ++;
    }
    result = "";
    return result;
}