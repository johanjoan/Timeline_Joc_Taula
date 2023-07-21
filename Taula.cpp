#include "Taula.hpp"



Taula::Taula() {
    num_cartes = 0;
}
Taula::~Taula(){};

vector<Carta> Taula::get_cartes() {
    return cartes;
}

int Taula::get_num_cartes() {
    return num_cartes;
}



void Taula::afegeix_carta(int pos, Carta carta) {
    cartes.push_back(carta);
    ++num_cartes;
    // cout << "abans for" << endl;
    for (int i = num_cartes-1; i > pos; --i) {
        Carta aux = cartes[i-1];
        cartes[i-1] = cartes[i];
        cartes[i] = aux;
        cartes[i].set_posicio(i+1);
    }
    // cout << "fifor" << endl;
    cartes[pos].set_posicio(pos+1);
}

void Taula::escriu_cartes() {
    cout << "                                                 ACTUALMENT LA TAULA CONTÈ LES SEGÜENTS CARTES:" << endl;
    cout << endl;  
    for (int i = 0; i < num_cartes; ++i) {
        cout << "          " <<  cartes[i].get_posicio() << ". " << cartes[i].get_descripcio() << " " << cartes[i].get_any() << endl;
    }
}

// bool Taula::posicio_correcte(int pos, int any) {
//     if (cartes.size() == 0) return true;
//     if (pos == 0) return any <= cartes[0].get_any();
//     if (pos == cartes.size()-1) return any >= cartes[cartes.size()-1].get_any();
//     return (any <= cartes[pos].get_any() and any >= cartes[pos-1].get_any());
// }