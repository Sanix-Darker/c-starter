#include "./headers/func.h"


int main(int argc, char** argv) {

  // const int x = 1;
  unsigned int i=0;
  for (i = 1; i < 11; ++i)
  {
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

  try {
    // Made an addition
    printf("\n[x] try-cactch in C");
  } catch (e in IOError) {
    println("[+] Error occur...");
  }

  return 1;
}
