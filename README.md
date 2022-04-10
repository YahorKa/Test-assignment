# Test-assignment
goal: Write a C/C++ program that reads a text file, deletes a given word on each line, without case-insensitively, and saves to a new file. The filenames and the word to be removed must be specified via the command line when calling the binary file. The program must be covered by unit tests.Make an application build under Linux.  For tests, you can use googletest.

# To build project
clone repo: git clone <url> --recursive
c++ main.cpp -o main

# To build google_test
build: cmake ..
build: make

# Run executable
./main

# Run google_test
build: ./mytest
