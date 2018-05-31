# C-Header-implementation

This C++ program asks the user to enter an integer and then computes the length of the collatz sequence generated by that integer.
The collatz sequence is the sequence formed by the following algorithm

we have an integer N
basecase: if n = 1, terminate
if n is even, n = n/2
if n is odd, n = 3*n + 1

the number of elements of this sequence is printed by the program.

In the file "calculateSequenceLength.h", there is a function that accepts an integer n and computes and returns the length the sequence for that integer n.

The file "collatzSequence.cpp" asks the user for the input N and calls the method defined in the header file.
