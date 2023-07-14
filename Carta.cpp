#include "Carta.hpp"

Carta::Carta(int any, int posicio, string descripcio) {
    set_any(any);
    set_posicio(posicio);
    set_descripcio(descripcio);
}

int Carta::get_any() {
    return any;
}

int Carta::get_posicio() {
    return posicio;
}

string Carta::get_descripcio() {
    return descripcio;
}

void Carta::set_posicio(int posicio) {
    this->posicio = posicio;
}

void Carta::set_any(int any) {
    this->any = any;
}

void Carta::set_descripcio(string descripcio) {
    this->descripcio = descripcio;
}