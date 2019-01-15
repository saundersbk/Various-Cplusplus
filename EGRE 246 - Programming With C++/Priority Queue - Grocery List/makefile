CC=g++

main.exe : main.o Grocery.o
	${CC} -o main.exe main.o Grocery.o
	
main.o : main.cpp Grocery.cpp Grocery.h
	${CC} -c -o main.o main.cpp
	
Grocery.o : Grocery.cpp Grocery.h
	${CC} -c -o Grocery.o Grocery.cpp
	
clean :
	rm *.o
	rm *.exe