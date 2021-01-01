int fib(int n){
    long long int i = 0, j = 1;
    long long int result = 0;
    if (n == 0) {
        return i;
    } else if (n == 1) {
        return j;
    } else {
        for (int z = 2; z <= n; z ++) {
            result = (i % 1000000007) + (j % 1000000007);
            i = j;
            j = result;
        }
        return (result % 1000000007);
    }
}