bool isValid(char * s){
    int len = strlen(s);
    if (len == 0) {
        return true;
    } 
    char stack[len];
    int count = 0;
    for (int i = 0; i < len; i ++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[count] = s[i];
            count ++;
        } else {
            if (count > 0) {
                char pop = stack[count - 1];
                count --;
                if (pop == '(' && s[i] != ')') {
                    return false;
                } else if (pop == '[' && s[i] != ']') {
                    return false;
                } else if (pop == '{' && s[i] != '}') {
                    return false;
                } 
            } else {
                return false;
            }
        }
    }    
    if (count > 0) return false;
    return true;
}