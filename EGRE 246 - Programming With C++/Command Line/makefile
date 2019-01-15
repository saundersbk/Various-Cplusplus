CC = g++

main.exe : main.o 
	${CC} -o main.exe main.o 

main.o : main.cpp 
	${CC} -o main.o -c main.cpp

clean : 
	rm -f *.o
	rm -f *.exe