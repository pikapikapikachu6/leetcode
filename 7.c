int reverse(int x){
    int arr[32];
    int i = 0;
    int ne = 0;
    long int nx = x;
    if (x < 0) {
        nx = -nx;
        ne = 1;
    } 
    while (nx > 0) {
        arr[i] = nx % 10;
        nx = nx / 10;
        i ++;
    }
    long int total = 0;
    i --;
    for (int j = 0; j <= i; j ++) {
        if (j == 0 && arr[j] == 0) continue;
        if ((total * 10 + arr[j]) <= 2147483647) total = total * 10 + arr[j];
            else {
                total = 0;
                break;
            }
    }
    int cur = total;
    if (ne == 1) return -cur;
        else return cur;
}