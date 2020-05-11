#include <string.h>

_Bool assert(char *func_name, _Bool condition, char *message){
    if(condition){
        printf("[+] > '%s' passed successfully,\n", func_name);
        return true;
    }else{
        if(strlen(message) <= 2){
            printf("[x] Error in the test : %s \n", func_name);
        }else{
            printf("[x] %s\n", message);
        }
        return false;
    }
}

int eval(_Bool func){
    if (func == true){
        return 1;
    }else{
        return 0;
    }
}
