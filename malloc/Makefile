main: malloc.memeasm
	memeasm -o $@ $^

run: main
	./main

.PHONY:
clean:
	rm -f ./main
