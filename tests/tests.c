#include "../src/headers/func.h"
#include "./assert.h"


void test_helloworld(){
    
    _Bool assertion = strcmp("Hello World !!!", hello()) == 0;

    assert("test_helloworld()", assertion, "");
}


int main(int argc, char** argv){

    test_helloworld();

    return 0;
}
