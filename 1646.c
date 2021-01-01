int getMaximumGenerated(int n){
    int a0 = 0;
    int a1 = 1;
    if (n == 0) {
        return 0;
    } 
    if (n == 1) {
        return 1;
    }
    int a[n+1];
    a[0] = a0;
    a[1] = a1;
    int max = 0;
    for (int i = 2; i <= n; i ++) {
        if (i % 2 == 1) {
            a[i] = a[(i-1)/2] + a[(i+1)/2];
        } else {
            a[i] = a[i/2];
        }
        if (a[i] > max) {
            max = a[i];
        } 
    }
    return max;
}
