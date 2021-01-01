char * simplifyPath(char * path){
    int len = strlen(path);
    char* stack[len];
    int count = 0;
    char* result = malloc(len * sizeof(char) + 1);
    strcpy(result,"");

    char* token = strtok(path,"/");
    
    while (token != NULL) {
        if (strcmp(token, "..") == 0) {
            if (count > 0) {
                count --;
            } 
        } else if (strcmp(token,".") != 0) {
                stack[count] = token;
                count ++;
        }
        token = strtok(NULL, "/");
    }
    
    if (count == 0) {
        return "/";
    }
    for (int i = 0; i < count; i ++) {
        strcat(result, "/");
        strcat(result, stack[i]);
    }
    
    return result;
}
