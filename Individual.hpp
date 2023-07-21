#ifndef individual_hpp
#define individual_hpp

#include "Jugador.hpp"
#include "Baralla.hpp"
#include "Taula.hpp"
#include "Textos.hpp"

class Individual {

    private:
        int max_torns;
        int cartes_a_colocar;
        Baralla baralla;
        Taula taula;
        Jugador jugador = Jugador("");

    public:
        Individual();
        ~Individual();

        Baralla get_baralla();
        Taula get_taula();
        Jugador get_jugador();
        int get_max_torns();
        int get_cartes_a_colocar();

        void set_nom_jugador(string nom);
        void set_dificultat(int dificultat);
        bool carta_correcte(int pos, int any); //Indica si una carta d'un cert "any" pot anar a la posició "pos" de la taula
        void juga_carta(int id_carta, int pos);
        void juga_partida();
};
#endif