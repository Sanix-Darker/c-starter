# C-starter

A small C starter application with [`Cello`](http://libcello.org/learn) for Hight level programming in C and a C package-manager named [`CLib`](https://github.com/clibs/clib).

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
To build your app in `./c_app`, you just have to run :
```shell
sh ./build.sh

# app.bin will be generated, now you can run it by hitting :
# ./app.bin

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

## Bonus

If you want to create a C-Lib library, you just have to put in the root of your repo a `package.json` file with this kind of structure : 
```json
{
  "name": "term",
  "author": "darker",
  "version": "0.0.1",
  "repo": "clibs/term",
  "description": "Terminal ansi escape goodies",
  "keywords": ["terminal", "term", "tty", "ansi", "escape", "colors", "console"],
  "license": "MIT",
  "src": ["src/term.c", "src/term.h"]
}
```

## Author

- Sanix-darker
