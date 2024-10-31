Author: Connor James
This is a machine language simulator project. This version supports the use of multiple operations, these operations being ADD, AND, ASR, LSR, LSL, NOT, ORR, SUB, XOR. The program currently reads from a file, runs its processes, then outputs the result in hexadecimal format. The program will determine which operation is needed to preform the function by the use of a keyword at the beginning of the operation read from the file. 
The hexabit class uses a templated system to have the ability to switch from signed to unsigned and vise versa if required by the input file.
There are 3 major files being main.cpp, hexabit.h, and hexabit.cpp.
To compile this program just type "make" then "./hex" 
The input files formatting is ADD 0x1 0x1 
an example of the output is ADD        0x1 + 0x1: 0x2 
The program will check whether or not the file had opened.

