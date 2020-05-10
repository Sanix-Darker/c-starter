#include <stdio.h>
#include <string.h>

void assert(char *func_name, _Bool condition, char *message){
    if(condition){
        printf("[+] Test on '%s' passed successfully,\n", func_name);
    }else{
        if(strlen(message) <= 2){
            printf("[x] Error in the test : %s \n", func_name);
        }else{
            printf("[x] %s\n", message);
        }
    }
}
