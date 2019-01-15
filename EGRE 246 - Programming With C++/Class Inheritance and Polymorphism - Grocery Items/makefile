CC=g++

main.exe : main.o item.o fruit.o dairy.o
	${CC} -o main.exe main.o item.o fruit.o dairy.o
	
main.o : main.cpp item.cpp item.h fruit.cpp fruit.h dairy.cpp dairy.h
	${CC} -c -o main.o main.cpp
	
item.o : item.cpp item.h
	${CC} -c -o item.o item.cpp
	
fruit.o : fruit.cpp fruit.h
	${CC} -c -o fruit.o fruit.cpp

dairy.o : dairy.cpp dairy.h
	${CC} -c -o dairy.o dairy.cpp

clean :
	rm *.o
	rm *.exe