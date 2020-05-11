#include "../src/headers/func.h"
#include "./assert.h"


_Bool test_helloworld(){
    
    _Bool assertion = (strcmp("Hello World !!!", hello()) == 0);

    return assert("test_helloworld()", assertion, "");
}


int main(int argc, char** argv){

    unsigned int win_test=0;
    unsigned int total_tests=0;
    printf("[+] -----------------------------------------------\n");
    printf("[+] Start tests...\n[+] \n");

    win_test += eval(test_helloworld());
    total_tests += 1;

    printf("[+] ===============================================\n");
    printf("[+] Reports %d/%d tests passed !\n", win_test, total_tests);
    printf("[+] -----------------------------------------------\n");
    return 0;
}
