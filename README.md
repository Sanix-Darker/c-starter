# C-starter

A small and lightweight C starter application.

## Features

- A Hight level programming based on [Cello](http://libcello.org/learn).
- A package manager implemented with [CLib](https://github.com/clibs/clib).
- A Basic unitTest with asserts.
- A documentation template.

## Project tree

The project structure :
```shell
.
├── build.sh
├── cello_install.sh
├── clib_install.sh
├── doc
│   └── index.html
├── README.md
├── run.sh
├── run_tests.sh
├── src
│   ├── func.c
│   ├── headers
│   │   └── func.h
│   └── main.c
└── tests
    ├── assert.h
    └── tests.c
```

## To install

Works only for Linux users (Ubuntu/Debian), you just have to run : 
```shell
# First install cello
sh ./cello_install.sh

# Then install clib
sh ./clib_install.sh

# TO search a C-library
# clib search [package-name]
# -
# TO Install the C-library
# clib install <user>/<repo>
```

## To build and run

To build your app in `./src`, you just have to run :
```shell
sh ./build.sh

# app.bin will be generated, now you can run it by hitting :
./dist/app.bin

# or just run 
sh ./run.sh
```

## Example

```c
#include "Cello.h"

int main(int argc, char** argv) {

  char name[30] = "";

  print(">>> Enter your name :");
  scanf("%s", &name);
  printf("<<< Welcome %s", name);

  println("");
  return 1;
}
/** output
 * 
 * >>> Enter your name :sanix
 * <<< Welcome sanix
 *
 **/
```

## Documentation

A Documentation template is in `./doc` and will be updated !


## To run Tests

I implemented a basic assert method in tests to performs some tests on methods in `./src/func.c`, you just have to run :
```shell
sh ./run_tests.sh

# Expected ouutput :

# [+] -----------------------------------------------
# [+] Start tests...
# [+] 
# [+] > 'test_helloworld()' passed successfully,
# [+] ===============================================
# [+] Reports 1/1 tests passed !
# [+] -----------------------------------------------
```

Otherwhise, you can use `cmocka`, an elegant unit testing framework for C with support for mock objects; install it by running:
```shell
# After installed clib
clib install cmocka
```

## Bonus For building your own Clib

**Note : You don't need this in this project, it just show you how to create a CLib if you want to !**
If you want to create a C-Lib library, you just have to put in the root of your repo a `package.json` file with this kind of structure : 
```json
{
  "name": "repo",
  "author": "darker",
  "version": "0.0.1",
  "repo": "<user>/<repo>",
  "description": "The description",
  "keywords": ["some", "keywords"],
  "license": "MIT",
  "src": ["src/main.c", "src/main.h"]
}
```

## Author

- Sanix-darker

## LICENSE

[MIT License](https://github.com/Sanix-Darker/c-starter/blob/master/LICENSE)
