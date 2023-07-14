#include "Baralla.hpp"



Baralla::Baralla(){};
Baralla::~Baralla(){};


void Baralla::inicialitza_baralla() { //Iniciem amb algunes dades per provar. En algun moment s'ha de fer que es llegeixi les dades desde algun fitxer extern.
    cartes[0] = Carta(1711,1,"Fundació de la Biblioteca nacional d'Espanya");
    cartes[1] = Carta(1953,1,"Primera ascensió al Everest");
    cartes[2] = Carta(64,1,"Gran Incendi de Roma");
    cartes[3] = Carta(1937,1,"Bombardeig de Guernica");
    cartes[4] = Carta(1939,1,"Comença la Segona Guerra Mundial");
    cartes[5] = Carta(1930,1,"Primera Copa Mundial de la FIFA");
    cartes[6] = Carta(1158,1,"Fundació de l'Ordre de Calatrava");
    cartes[7] = Carta(1969,1,"Festival de Woodstock");
    cartes[8] = Carta(1982,1,"Espanya passa a formar part de la OTAN");
    cartes[9] = Carta(1914,1,"Platero y yo");
    cartes[10] = Carta(1975,1,"Mort de Franco");
    cartes[11] = Carta(2017,1,"Mort de Chiquito de la Calzada");
    cartes[12] = Carta(1963,1,"Assesinat de Kenedy");    
}

vector<Carta> Baralla::get_cartes(){
    return cartes;
}

Carta Baralla::get_carta(int i) {
    return cartes[i];
}

int Baralla::get_num_cartes(){
    return num_cartes;
}

Carta Baralla::treu_carta() {
    int random = rand() % num_cartes; 
    Carta treta = cartes[random];
    --num_cartes;
    for (int i = random; i < num_cartes; ++i) {
        cartes[i] = cartes[i+1];
    }
    cartes.pop_back();
    return treta;
}