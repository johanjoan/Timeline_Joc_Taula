#ifndef taula_hpp
#define taula_hpp

#include <iostream>
#include "Baralla.hpp"

class Taula {
    private:
        vector<Carta> cartes;
        int num_cartes;

    public:
        Taula();
        ~Taula();
        vector<Carta> get_cartes();
        int get_num_cartes();
        void afegeix_carta(int pos, Carta carta);
        void escriu_cartes();
        // bool posicio_correcte(int pos, int any);


};
#endif