#ifndef baralla_hpp
#define baralla_hpp

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Carta.hpp"
using namespace std;



class Baralla {
    private:
        int num_cartes = 13;
        vector<Carta> cartes = vector<Carta>(num_cartes);
    public:

        Baralla();
        ~Baralla();

        void inicialitza_baralla(); //Introdueix les cartes a la baralla
        vector<Carta> get_cartes(); //Retorna el vector amb totes les cartes que hi ha en aquell moment a la baralla
        Carta get_carta(int i); //Retorna la carta que es troba en la posició "i" en el vector de la baralla
        int get_num_cartes(); //Retorna el nombre de cartes que queden en la baralla
        Carta treu_carta(); //Treu una carta al atzar de la baralla. Retorna la carta i l'elimina de la baralla

};
#endif
