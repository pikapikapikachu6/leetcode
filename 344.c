void reverseString(char* s, int sSize){
    int i = 0;
    char ch;
    for (i = 0; i < (sSize / 2); i ++) {
        ch = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = ch;
    }
    return s;
}