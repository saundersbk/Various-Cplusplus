CC=g++

main.exe : main.o arr.o list.o
	${CC} -o main.exe main.o arr.o list.o
	
main.o : main.cpp arr.cpp arr.h list.cpp list.h
	${CC} -c -o main.o main.cpp
	
arr.o : arr.cpp arr.h
	${CC} -c -o arr.o arr.cpp
	
list.o : list.cpp list.h
	${CC} -c -o list.o list.cpp

clean :
	rm *.o
	rm *.exe