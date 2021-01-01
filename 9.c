bool isPalindrome(int x){
    int arr[33];
    int i = 0;
    if (x < 0) return false;
    while (x >= 10) {
        arr[i] = x % 10;
        x = x / 10;
        i = i + 1;
    }    
    arr[i] = x;
    int j = 0;
    int result = 0;
    while (j <= i) {
        if (arr[j] != arr[i - j]) {
            result = 1;
        }
        j = j + 1;
    }
    if (result == 1) {
        return false;
    } else {
        return true;
    }
}