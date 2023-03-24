.PHONY: build, run, clean

clean:
	rm -rf dist && mkdir dist

build:clean
	gcc -std=gnu99 ./src/main.c -Wall ./src/func.c -lCello -lm -lpthread -o ./dist/app.bin

run:build
	./dist/app.bin

