#include "Jugador.hpp"


Jugador::Jugador(){};

Jugador::Jugador(string nom){
    this->nom = nom;
};
Jugador::~Jugador(){};


int Jugador::get_encerts() {
    return encerts;
}

int Jugador::get_fallos() {
    return fallos;
}

int Jugador::get_torns() {
    return torns_jugats;
}

string Jugador::get_nom() {
    return nom;
}

vector<Carta> Jugador::get_ma() {
    return ma;
}

void Jugador::set_nom(string nom) {
    this->nom = nom;
}


void Jugador::set_encerts(int encerts) {
    this->encerts = encerts;
}

void Jugador::set_fallos(int fallos) {
    this->fallos = fallos;
}

void Jugador::set_torns_jugats(int torns_jugats) {
    this->torns_jugats = torns_jugats;
}

void Jugador::roba_cartes(int n, Baralla& b) {
    int num = ma.size();
    for (int i = 0; i < n; ++i) {
        ma.push_back(b.treu_carta());
        ma[num].set_posicio(num+1);
        num+=1;
    }
}

void Jugador::elimina_carta(int pos) {
    int n = ma.size() - 1;
    for (int i = pos; i < n; ++i) {
        ma[i] = ma[i+1];
        ma[i].set_posicio(i+1);
    }
    ma.pop_back();
}

void Jugador::escriu_ma() {
    cout << "                                                    ACTUALMENT " << nom << " TÉ LES SEGÜENTS CARTES:" << endl;
    cout << endl;
    for (int i = 0; i < ma.size(); ++i) {
        cout << "          " <<  ma[i].get_posicio() << ". " << ma[i].get_descripcio() <<  endl;
    }
}