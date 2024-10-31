Author: Connor James
This is a machine language simulator project. This version supports the use of a single operation, that operation being ADD which adds two hexadecimal numbers. The program currently reads from a file, runs its processes, then outputs the result in hexadecimal format.
There are 3 major files being main.cpp, hexabit.h, and hexabit.cpp.
To compile this program just type "make" then "./hex" 
The input files formatting is ADD 0x1 0x1 
an example of the output is ADD        0x1 + 0x1: 0x2     Overflow: No
The program will check whether or not the file had opened along with if there was an overflow detected during the addition

