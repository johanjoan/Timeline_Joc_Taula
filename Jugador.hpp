#ifndef jugador_hpp
#define jugador_hpp

#include <iostream>
#include "Baralla.hpp"
#include "Carta.hpp"
using namespace std;

class Jugador {
    private:
        int encerts = 0;
        int fallos = 0;
        int torns_jugats = 0;
        string nom = "";
        vector<Carta> ma;
    public:
        Jugador();
        Jugador(string nom);
        ~Jugador();

        int get_encerts();
        int get_fallos();
        int get_torns();
        string get_nom();
        vector<Carta> get_ma();

        void set_nom(string nom);
        void set_encerts(int encerts);
        void set_fallos(int fallos);
        void set_torns_jugats(int torns_jugats);

        void roba_cartes(int n,Baralla& b);
        void elimina_carta(int pos); //Elimina la carta en la posició "pos" de la mà del jugador
        void escriu_ma();
};
#endif
