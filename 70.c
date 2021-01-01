int climbStairs(int n){
    int one = 1, two = 2;
    if (n == 1) {
        return one;
    } else if (n == 2) {
            return two;
    }  else {
            int result = 0;
            for (int i = 3; i <= n; i ++) {
                result = one + two;
                one = two;
                two = result;
            }
        return result;
    }
}