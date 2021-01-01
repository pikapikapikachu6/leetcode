bool backspaceCompare(char * S, char * T){
    int lens = strlen(S);
    int lent = strlen(T);
    if (lens == 0 && lent == 0) {
        return true;
    } 
    if ((lens != 0 && lent == 0) || (lens == 0 && lent != 0)) {
        return false;
    }
    char stacks[lens];
    char stackt[lent];
    int counts = 0, countt = 0;
    for (int i = 0; i < lens; i ++) {
        if (S[i] != '#') {
            stacks[counts] = S[i];
            counts ++;
        } else {
            if (counts > 0) {
                counts --;
            } 
        }
    }
    for (int i = 0; i < lent; i ++) {
        if (T[i] != '#') {
            stackt[countt] = T[i];
            countt ++;
        } else {
            if (countt > 0) {
                countt --;
            } 
        }
    }
    if (counts != countt) {
        return false;
    }
    for (int i = counts - 1; i >= 0; i --) {
        if (stacks[i] != stackt[i]) {
            return false;
        }
    }
    return true;
}