#include "Individual.hpp"


Individual::Individual() {
    string nom = nom_individual();
    jugador.set_nom(nom);
    int dificultat = dificultat_individual(nom);
    set_dificultat(dificultat);
    baralla.inicialitza_baralla();

}
Individual::~Individual(){};


Baralla Individual::get_baralla() {
    return baralla;
}

Taula Individual::get_taula() {
    return taula;
}

Jugador Individual::get_jugador() {
    return jugador;
}

int Individual::get_max_torns() {
    return max_torns;
}

int Individual::get_cartes_a_colocar() {
    return cartes_a_colocar;
}


void Individual::set_nom_jugador(string nom) {
    jugador.set_nom(nom);
}

void Individual::set_dificultat(int dificultat) {
    if (dificultat == 1) {
        max_torns = 20;
        cartes_a_colocar=5;
    }
    else if (dificultat == 2) {
        max_torns = 15;
        cartes_a_colocar = 7;
    }
    else {
        max_torns = 12;
        cartes_a_colocar = 10;
    }
}


//Com a mínim hi ha una carta a la taula (La inicial)
bool Individual::carta_correcte(int pos, int any) {
    if (pos == 0) return any <= taula.get_cartes()[0].get_any();
    if (pos == taula.get_num_cartes()) return any >= taula.get_cartes()[taula.get_num_cartes()-1].get_any();
    return (any <= taula.get_cartes()[pos].get_any() and any >= taula.get_cartes()[pos-1].get_any());
}



void Individual::juga_carta(int id_carta,int pos) {
    if (carta_correcte(pos,jugador.get_ma()[id_carta].get_any())) { //S'ha encertat la posició on s'ha de col·locar la carta
        text_carta_correcte(jugador.get_nom(), jugador.get_ma()[id_carta].get_descripcio(), jugador.get_ma()[id_carta].get_any());
        taula.afegeix_carta(pos,jugador.get_ma()[id_carta]);
        jugador.elimina_carta(id_carta);
        jugador.set_encerts(jugador.get_encerts()+1);
    }
    else {
        text_carta_incorrecte(jugador.get_nom(), jugador.get_ma()[id_carta].get_descripcio(), jugador.get_ma()[id_carta].get_any());
        if (max_torns == jugador.get_torns() + jugador.get_ma().size()) {
            getchar();
            getchar();
            return;
        }
        jugador.elimina_carta(pos);
        jugador.set_fallos(jugador.get_fallos()+1);
        jugador.roba_cartes(1,baralla);
        text_carta_robada(jugador.get_nom(), jugador.get_ma()[jugador.get_ma().size()-1].get_descripcio());
    }
}

void Individual::juga_partida() {
    bool acabat = false;
    system("clear");
    cout << "                                                          ATENCIÒ " << jugador.get_nom() << " COMENÇA LA PARTIDA" << endl;
    getchar();
    // cout << endl;
    inici_taula();
    //Afegim una carta a la taula a la posició 0
    taula.afegeix_carta(0,baralla.treu_carta());
    taula.escriu_cartes();
    cout << endl;
    getchar();
    //Repartim cartes al jugador
    text_repartir_inici();
    jugador.roba_cartes(cartes_a_colocar,baralla);
    jugador.escriu_ma();



    while (not acabat) {
        getchar();
        cout << endl;
        int accio = accio_a_fer();
        if (accio == 1) { 
            taula.escriu_cartes();
        }
        else if (accio == 2) {
            jugador.escriu_ma();
            cout << "                                              RECORDA QUE ET QUEDEN " << max_torns - jugador.get_torns() << " TORNS DISPONIBLES" << endl;
        }
        else if (accio == 3) {
            int id_carta = text_jugar_carta_id(jugador.get_ma().size());
            int pos = text_jugar_carta_pos(taula.get_num_cartes());
            juga_carta(id_carta-1,pos-1);
            jugador.set_torns_jugats(jugador.get_torns()+1);
        }
        else system("clear");

        if (jugador.get_ma().size() == 0) {
            acabat = !acabat;
            text_individual_victoria(jugador.get_nom(), cartes_a_colocar,max_torns-jugador.get_torns());
        }
        else if (max_torns < jugador.get_torns() + jugador.get_ma().size()) {
            acabat = !acabat;
            text_individual_derrota(jugador.get_nom(), cartes_a_colocar-jugador.get_encerts());
            getchar();
        }

    }
}

