## Compilation automatique de source C
# Compilteur
CC := g++
#options de compilation
CFLAGS := --std=c++11 -Wall -Wextra -pedantic -ggdb
# Librairies
LIB := -lSDL2
#Nom de l'exe du jeu
EXE := wb.o
# Règle de compilation

compile : 
	$(CC) $(CFLAGS) $(LIB) *.cpp -o $(EXE)

all : compile

test_chara :
	$(CC) $(CFLAGS) $(LIB) chara.cpp power.cpp test.cpp -o test_chara.o
	valgrind --leak-check=full --log-file=test_chara.valgrind ./test_chara.o > test_chara.res

run: compile
	./$(EXE)

clean:
	rm *.o
