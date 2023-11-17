bank: main.o userInterface.o
	g++ main.o userInterface.o -o bank

main.o: main.cpp
	g++ -c main.cpp

userInterface.o: userInterface.cpp
	g++ -c userInterface.cpp

clean: 
	rm *.o main