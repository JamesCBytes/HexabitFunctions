hex: main.o hexabit.o
	g++ -o hex main.o hexabit.o

main.o: hexabit.h main.cpp
	g++ -c main.cpp

hexabit.o: hexabit.h hexabit.cpp	
	g++ -c hexabit.cpp

clean: 
	rm *.o hex