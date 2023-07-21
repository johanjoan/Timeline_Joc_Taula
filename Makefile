all: joc.exe main.o Baralla.o Carta.o Jugador.o Taula.o Individual.o Textos.o

joc.exe: Baralla.o Carta.o main.cpp main.o Jugador.o Taula.o Individual.o Textos.o
	g++ -Wall -O2 -std=c++11 -o joc.exe *.o

main.o: main.cpp
	g++ -Wall -O2 -std=c++11 -c main.cpp

Baralla.o: Baralla.cpp Info_Cartes.txt
	g++ -Wall -O2 -std=c++11  -c Baralla.cpp

Carta.o: Carta.cpp
	g++ -Wall -O2 -std=c++11  -c Carta.cpp

Jugador.o: Jugador.cpp
	g++ -Wall -O2 -std=c++11 -c Jugador.cpp

Taula.o: Taula.cpp
	g++ -Wall -O2 -std=c++11 -c Taula.cpp
# textos.o: textos.cpp
# 	g++ -Wall -O2 -std=c++11   -c textos.cpp

Individual.o: Individual.cpp
	g++ -Wall -O2 -std=c++11   -c Individual.cpp

Textos.o: Textos.cpp
	g++ -Wall -O2 -std=c++11   -c Textos.cpp


clean: 
	rm *.o
	rm *.exe
