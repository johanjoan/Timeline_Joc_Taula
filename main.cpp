#include "Jugador.hpp"
#include "Baralla.hpp"
#include "Taula.hpp"
#include "Individual.hpp"
#include "Textos.hpp"

using namespace std;





int main() { //Només per fer proves de les classes que tinc

    escriu_pagina_inicial();
    bool jugar = true;
    
    while (jugar) {
        srand (time(NULL));
        system("clear");
        int mode = selecciona_mode_joc();

        if (mode == 1) {
            Individual partida;
            partida.juga_partida();
            // cout << "                                    VOLS TORNAR A JUGAR? SI/N"
        }

        else if (mode == 2) {
            cout << "                                                    AQUEST MODE DE JOC ENCARA NO ESTÀ DISPONIBLE" << endl;
            getchar();
            getchar();
        }

        else {
            escriu_instruccions();
            getchar(),
            getchar();
        }
    }

}