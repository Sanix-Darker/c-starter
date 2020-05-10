#include "./headers/func.h"

struct Example_struct {
  float x, y;
};

char* hello(){
  char *sentence = "Hello World !!!";
  return sentence;
}

void test_function(){
  char name[10] = "";

  print(">>> Enter your name :");
  fgets(name, sizeof(name), stdin);
  printf("<<< Welcome %s\n", name);
}

var test_tables(void){
  var prices = new(Table, String, Int);
  set(prices, $S("Apple"),  $I(12)); 
  set(prices, $S("Banana"), $I( 6)); 
  set(prices, $S("Pear"),   $I(55)); 

  /* Tables also support iteration */
  foreach (key in prices) {
    var val = get(prices, key);
    print("Price of %$ is %$\n", key, val);
  }
  return 0;
}

/**
 * addition A simple addition method 
 **/
var addition(){
  var i0 = $(Int, 5);
  var i1 = $I(3);
  var total = $I(c_int(i0) + c_int(i1));

  println("[+] %$ + %$ = %i", i0, i1, total);
  
  return 0;
}

/**
 * cello_struct to demonstrate cello-struct
 **/
var cello_struct(){
  // cello struct convertion
  var Example_struct = Cello(Example_struct);
  /* Create on Stack or Heap */
  var p0 = $(Example_struct, 0.0, 1.0);
  var p1 = new(Example_struct, $(Example_struct, 0.0, 2.0));
  
  /* It can be shown, compared, hashed, etc...
  **
  ** p0: <'Example_struct' At 0x000000000022FC58>
  ** p1: <'Example_struct' At 0x00000000004C7CC8>
  ** cmp: 1
  ** hash: 2849275892l
  */ 
  print("\np0: %$\np1: %$\ncmp: %i\nhash: %ul\n", p0, p1, $I(cmp(p0, p1)), $I(hash(p0)));

  return 0;
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
