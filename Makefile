all: lab4

lab4: main.o dice_game.o
	g++ main.o dice_game.o -o lab4

main.o: main.cpp
	g++ -c main.cpp -o main.o

dice_game.o: dice_game.cpp dice_game.h
	g++ -c dice_game.cpp -o dice_game.o

clean:
	rm -f *.o lab4
