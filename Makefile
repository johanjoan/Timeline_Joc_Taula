all: joc.exe main.o Baralla.o Carta.o Jugador.o

joc.exe: Baralla.o Carta.o main.cpp main.o Jugador.o
	g++ -Wall -O2 -std=c++11 -o joc.exe *.o

main.o: main.cpp
	g++ -Wall -O2 -std=c++11 -c main.cpp

Baralla.o: Baralla.cpp
	g++ -Wall -O2 -std=c++11  -c Baralla.cpp

Carta.o: Carta.cpp
	g++ -Wall -O2 -std=c++11  -c Carta.cpp

Jugador.o: Jugador.cpp
	g++ -Wall -O2 -std=c++11 -c Jugador.cpp

# textos.o: textos.cpp
# 	g++ -Wall -O2 -std=c++11   -c textos.cpp

# individual.o: individual.cpp
# 	g++ -Wall -O2 -std=c++11   -c individual.cpp


clean: 
	rm *.o
	rm *.exe