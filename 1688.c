int numberOfMatches(int n){
    int sum = 0;
    while (n > 1) {
        if (n % 2 == 1) {
            sum = sum + (n - 1) / 2;
            n = (n - 1) / 2 + 1;
        } else {
            sum = sum + n / 2;
            n = n / 2;
        }
    } 
    return sum;
}