#ifndef carta_hpp
#define carta_hpp
#include <iostream>
#include <string>
using namespace std;


class Carta {
    private:
        int any, posicio;
        string descripcio;
    public:
        Carta(int any= 0, int posicio = 0, string descripcio="");

        int get_any();
        int get_posicio();
        string get_descripcio();
        
        void set_posicio(int posicio);
        void set_any(int any);
        void set_descripcio(string descripcio);
        
};
#endif
