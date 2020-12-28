int romanToInt(char * s){
    int result = 0;
    while (*s) {
        switch (*s) {
            case 'I':
                ((*(s+1) == 'V') || (*(s+1) == 'X')) ? (result -= 1) : (result += 1);
                break;
            case 'V':
                result += 5;
                break;
            case 'X':
                ((*(s+1) == 'L') || (*(s+1) == 'C')) ? (result -= 10) : (result += 10);
                break;
            case 'L':
                result += 50;
                break;
            case 'C':
                ((*(s+1) == 'D') || (*(s+1) == 'M')) ? (result -= 100) :(result += 100);
                break;
            case 'D':
                result += 500;
                break;
            case 'M':
                result += 1000;
                break;
            default:
                break;
        }
        s++;
    }
    return result;
}