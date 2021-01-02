int strStr(char * haystack, char * needle){
    if (haystack == NULL && needle != NULL) return -1;
    if (haystack == NULL && needle == NULL) return 0;
    if (haystack != NULL && needle == NULL) return 0;
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    if (len1 == 0 && len2 == 0) return 0;
    if (len1 != 0 && len2 == 0) return 0;
    if (len1 == 0 && len2 != 0) return -1;
    for (int i = 0; i < len1 - len2 + 1; i ++) {
        int result = 0;
        for (int j = 0; j < len2; j ++) {
            if (haystack[i + j] != needle[j]) {
                result = 1;
                break;
            }
        }
        if (result == 0) return i;
    }
    return -1;
}