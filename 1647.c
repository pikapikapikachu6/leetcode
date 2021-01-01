int minDeletions(char * s){
    int length = strlen(s);
    int ch[26];
    for (int i = 0; i < 26; i ++) {
        ch[i] = 0;
    }
    int max = 0;
    for (int i = 0; i < length; i ++) {
        int cur = s[i] - 'a';
        ch[cur] ++;
        if (ch[cur] > max) {
            max = ch[cur];
        }
    }
    int a[max + 1];
    for (int i = 0; i < max + 1; i ++) {
        a[i] = 0;
    }
    for (int i = 0; i < 26; i ++) {
        if (ch[i] != 0) {
            a[ch[i]] ++;
        }
    }
    int num = 0;
    for (int i = 0; i < max + 1; i ++) {
        if (a[i] > 1) {
            for (int j = a[i]; j > 1; j --) {
                int put = 1;
                for (int j = i; j > 0; j --) {
                    if (a[j] == 0) {
                        num = num + i - j;
                        put = 0;
                        a[i] --;
                        a[j] = 1;
                        break;
                    }
                }
                if (put == 1) {
                    a[i] --;
                    num = num + i;
                }
            }
        }
    }
    return num;
}