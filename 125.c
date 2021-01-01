int isvalid (char c) {
    if (isalpha(c) || (c >= '0' && c <= '9')) {
        return 1;
    } else {
        return 0;
    }
}

bool isPalindrome(char * s){
    char *p1 = s;
    char *p2 = s + strlen(s) - 1;
    while (p1 < p2) {
        if (isvalid(*p1) && isvalid(*p2)) {
            if (tolower(*p1) == tolower(*p2)) {
                p1 ++;
                p2 --;
            } else {
                return false;
            }
        } else {
            if (isvalid(*p1) == 0) {
                p1 ++;
            }
            if (isvalid(*p2) == 0) {
                p2 --;
            }
        }
    }   
    return true;
}