int fib(int N){
    int i = 0;
    int j = 1;
    int z = 2;
    int result = 0;
    if (N == 0) {
        return i;
    } else if (N == 1) {
        return j;
    } else {
        while (z <= N) {
            result = i + j;
            i = j;
            j = result;
            z ++;
        }
        return result;
    }
}