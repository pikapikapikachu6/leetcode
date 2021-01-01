bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    if (flowerbed[0] == 0) {
        if (flowerbedSize > 1) {
            if (flowerbed[1] == 0) {
                n --;
                flowerbed[0] = 1;
            }
        } else if (n == 1 || n == 0) return true;
          else return false;
    }
    for (int i = 1; i < flowerbedSize - 1; i ++) {
        if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
            n --;
            flowerbed[i] = 1;
        }
    }
    if (flowerbed[flowerbedSize - 1] == 0 && flowerbed[flowerbedSize - 2] == 0) n--;
    if (n <= 0) return true;
    return false;
}