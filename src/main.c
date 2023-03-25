#include "./headers/func.h"

int main(int argc, char** argv) {
    // const int x = 1;
    unsigned int i = 0;
    for (i = 1; i < 11; ++i) {
        printf("%d ", i);
    }

    // Cello struct
    cello_struct();

    // Addition
    addition();

    // Simple test function
    test_function();

    // A Cello base function
    test_tables();

    var x = new (Table, String, Int);
    set(x, $S("Hello"), $I(1));
    set(x, $S("World"), $I(2));

    try {
        get(x, $S("Missing"));
    } catch (e in KeyError) {
        println("Got Exception: %$", e);
    }

    return 0;
}
