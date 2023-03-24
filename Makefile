.PHONY: build-prod, build-dev, prod, dev, clean, install-clib, install-cello

SHELL := /bin/bash # Use bash syntax

install-cello:
	./cello_install.sh

install-clib:
	./clib_install.sh

clean:
	rm -rf dist && mkdir dist

build-dev:
	# On windows:
	# gcc -std=gnu99 ./src/main.c  -Wall ./src/func.c -lCello -lDbgHelp -o ./dist/app.bin
	gcc -std=gnu99 ./src/main.c -Wall ./src/func.c -lCello -lm -lpthread -o ./dist/app-dev.bin -g

build-prod:
	gcc -std=gnu99 ./src/main.c -Wall ./src/func.c -lCello -lm -lpthread -o ./dist/app-prod.bin -s

dev:build-dev
	./dist/app-dev.bin

prod:build-prod
	./dist/app-prod.bin

