#include "Baralla.hpp"



Baralla::Baralla(){};
Baralla::~Baralla(){};


void Baralla::inicialitza_baralla() { //Iniciem les cartes llegides desde el fitxer Info_Cartes.txt  
    ifstream f; f.open("Info_Cartes.txt");
    while (f and f.good()) {
        string s1, s2, info;
        f >> s1 >> s2;
        getline(f,info);
        int any = stoi(s1);
        int pos = stoi(s2);
        cartes.push_back(Carta(any,pos,info));
        ++num_cartes;
    }    
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