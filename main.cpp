#include "Jugador.hpp"
#include "Baralla.hpp"

using namespace std;





int main() { //Només per fer proves de les classes que tinc
    Baralla baralla;
    Jugador jugador("Joan");
    baralla.inicialitza_baralla();
    jugador.roba_cartes(5,baralla);
    vector<Carta> ma = jugador.get_ma();
    for (int i = 0; i < ma.size(); ++i) {
        cout << ma[i].get_posicio() << " " << ma[i].get_descripcio() << " " << ma[i].get_any() << endl;
    }
}