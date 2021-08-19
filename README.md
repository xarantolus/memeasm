![Made with MemeAssembly Badge](https://img.shields.io/badge/made%20with-MemeAssembly-blue) [![Run all programs](https://github.com/xarantolus/memeasm/actions/workflows/run_all.yml/badge.svg)](https://github.com/xarantolus/memeasm/actions/workflows/run_all.yml)

# memeasm
This is a collection of example programs for [MemeAssembly](https://github.com/kammt/MemeAssembly), an esoteric x86-Assembly based programming language. Just for fun :)

### Programs
* [to_binary](to_binary/to_binary.memeasm): Prints the binary digits of a number that is set in the code.
* [to_octal](to_octal/to_octal.memeasm): Prints the octal digits of a number that is set in the code.
* [to_hex](to_hex/to_hex.memeasm): Prints the hex digits of a number that is set in the code.

To find even more examples, look at those [in the official repository](https://github.com/kammt/MemeAssembly/tree/main/examples).

### How to run
So you want to run some of these programs?

First, make sure you have MemeAssembly installed.

Then go into a program directory (e.g. `to_binary`) using 

    cd to_binary

Now you can use `make` to build & run the program:

    make run

This builds and runs the program.

### License & Contributing
Feel free to use these examples as you like to implement your own programs. If you have suggestions for improvements etc, please feel free to open an issue or pull request.
