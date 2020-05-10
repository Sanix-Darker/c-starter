#include "./headers/main.h"

struct Example_struct {
  uint64_t x, y;
};

int main(int argc, char** argv) {

  // cello struct convertion
  var Example_struct = Cello(Example_struct);

  var i0 = $(Int, 5);
  var i1 = $I(3);
  var total = $I(c_int(i0) + c_int(i1));

  println("[+] %$ + %$ = %i", i0, i1, total);

  // Simple test function
  test_function();

  // A Cello base function
  func();

  try {
    // Made an addition
    printf("\n[x] try-cactch in C");
  } catch (e in IOError) {
    println("[+] Error occur...");
  }

  println("");
  return 1;
}

void test_function(){
  char name[10] = "";

  print(">>> Enter your name :");
  fgets(name, sizeof(name), stdin);
  printf("<<< Welcome %s\n", name);
}

var func(){
  var prices = new(Table, String, Int);
  set(prices, $S("Apple"),  $I(12)); 
  set(prices, $S("Banana"), $I( 6)); 
  set(prices, $S("Pear"),   $I(55)); 

  /* Tables also support iteration */
  foreach (key in prices) {
    var val = get(prices, key);
    print("Price of %$ is %$\n", key, val);
  }
}

/** Expected output
 * 
 * [+] 5 + 3 = 8
 * >>> Enter your name :test
 * <<< Welcome test
 * Price of "Banana" is 6
 * Price of "Pear" is 55
 * Price of "Apple" is 12
 * 
 * [x] try-cactch
 **/
