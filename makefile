hex: main.o 
	g++ -o hex main.o 

main.o: hexabit.h main.cpp
	g++ -c main.cpp


clean: 
	rm *.o hex