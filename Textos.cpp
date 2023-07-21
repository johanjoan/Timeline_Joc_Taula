#include "Textos.hpp"


void escriu_pagina_inicial() {
    system("clear");
    cout << "                                                          BENVINGUT AL JOC DE TAULA TIMELINE" << endl;
    cout << endl;
    cout <<"                                               AQUEST JOC ES POT JUGAR EN MODE INDIVIDUAL O COMPETITIU" << endl;
    cout << endl;
}

int selecciona_mode_joc() {
    int mode;
    cout <<"                                                          A QUIN MODE DE JOC VOLS JUGAR?" << endl;
    cout << endl;
    cout <<"                                                                1. Mode individual" << endl;
    cout <<"                                                                2. Mode competitiu" << endl;
    cout <<"                                                                3. Veure instruccions" << endl;
    cout << endl;
    cout <<"                                                         SIUSPLAU INDICA LA TEVA SELECCIÓ: ";
    cin >> mode;
    while (mode < 1 or mode > 3) {
        cout << "                                      ERROR EN LA LECTURA DEL MODE! SIUSPLAU TORNA A INDICAR LA TEVA SELECCIÓ: ";
        cin >> mode;
    }
    cout << endl;
    return mode;    
}

void escriu_instruccions() {
    system("clear");
    cout << "                                                                   INSTRUCCIONS DEL JOC:" <<   endl;
    cout << "                El joc consisteix en col·locar en ordre temporal les diferents cartes que es reparteixen. Si t'equivoques hauràs de robar-ne una altra!" << endl;
    cout << endl;
    cout << "                                                                 INSTRUCCIONS MODE INDIVIDUAL:" <<   endl;
    cout << "                                  En aquest mode de joc hauràs de col·locar totes les cartes en un nombre determinat de torns" << endl;
    cout << "                    El nombre de cartes a col·locar i el nombre de torns disponibles ve determinat per el nivell de dificultat escollit" << endl;
    cout << endl;
    cout << "                                                                 INSTRUCCIONS MODE COMPETITIU:" << endl;
    cout << "                        En aquest mode, fins a 4 jugadors competiran per veure qui aconsegueix col·locar abans les seves cartes" << endl;
    cout << "                     En cas que ja no quedin més cartes per robar el guanyador serà aquell que hagi fet menys errors fins al moment" << endl;
    cout << endl;
    cout << endl;
    // int kk;
    // cin >> kk;
}

void text_inici_partida_individual() {

    cout << "                                                          COMENÇA LA PARTIDA: " << endl;
    cout << endl;
    cout << "                                           Primer de tot col·loquem la primera carta a la taula:" << endl;
    cout << endl;
}

int dificultat_individual(string nom) {
    cout << "                                  Perfecte " << nom << " ara has de decidir a quin nivell de dificultat vols jugar" << endl;
    cout << endl;
    cout << "                                               Nivell 1: Col·locar 5 cartes en 20 torns." << endl;
    cout << endl;
    cout << "                                               Nivell 2: Col·locar 7 cartes en 15 torns." << endl;
    cout << endl;
    cout << "                                               Nivell 3: Col·locar 10 cartes en 12 torns." << endl;
    cout << endl;

    cout <<"                                                 SIUSPLAU INDICA LA TEVA SELECCIÓ: "; 
    int out;
    cin >> out;
    while (out < 1 or out > 3) {
        cout << "                            ERROR EN LA LECTURA DEL NIVELL. SIUSPALU TORNA A INDICAR LA TEVA SELECCIÓ: ";
        cin >> out;
        cout << endl;
    }
    cout << endl;
    cout << "                                                  PERFECTE " << nom << " JUGARAS AL NIVELL " << out << endl;
    getchar();
    getchar();
    return out;
}


string nom_individual() {
    string nom;
    system("clear");
    cout << "                                                   COMENÇA LA PARTIDA INDIVIDUAL" << endl;
    cout << endl;
    cout << "                               PRIMER DE TOT I PER CONEIXER-TE UNA MICA MILLOR INDICA'M EL TEU NOM SIUSPLAU" << endl;
    cout << "                                                                ";
    cin >> nom;
    cout << endl;
    return nom;
}

void inici_taula() {
    cout << "                                               PRIMER DE TOT COL·LOCAREM LA CARTA INICIAL A LA TAULA" << endl;
    getchar();
    cout << endl;
}

void text_repartir_inici() {
    cout << "                                                 A CONTINUACIÓ REPARTIREM LES CARTES A CADA JUGADOR" << endl;
    getchar();
    cout << endl;
}


int accio_a_fer() {
    cout << "                                                 Quina acció vols realitzar a continuació?" << endl;
    cout << endl;
    cout << "                                                      1: Veure les cartes de la taula" << endl;
    cout << endl;
    cout << "                                                      2: Veure les cartes a la mà del jugador" << endl;
    cout << endl;
    cout << "                                                      3:  Jugar una carta" << endl;
    cout << endl;
    cout << "                                                      4:  Netejar la terminal" << endl;
    cout << endl;
    cout <<"                                                 SIUSPLAU INDICA LA TEVA SELECCIÓ: "; 
    int out;
    cin >> out;
    cout << endl;
    while (out < 1 or out > 4) {
        cout << out << endl;
        cout << "                                     ERROR EN LA LECTURA SIUSPALU TORNA A INDICAR LA TEVA SELECCIÓ: "; 
        cin >> out;
    }
    return out;
}

int text_jugar_carta_id(int n){
    cout << "                                               INDICA EL NUMERO DE LA CARTA QUE VOLS JUGAR: ";
    int num;
    cin >> num;
    while (num < 1 or num > n) {
        cout << "                                     ERROR EN LA LECTURA SIUSPALU TORNA A INDICAR LA TEVA SELECCIÓ: "; 
        cin >> num;
    }
    return num;
}

int text_jugar_carta_pos(int n) {
    cout << "                                               INDICA LA POSICIÓ ON VOLS COL·LOCAR LA CARTA (1-" << n+1 << "): ";
    int num;
    cin >> num;
    while (num < 1 or num > n+1) {
        cout << "                                     ERROR EN LA LECTURA SIUSPALU TORNA A INDICAR LA TEVA SELECCIÓ: "; 
        cin >> num;
    }
    return num;
}

void text_carta_correcte(string nom, string descripcio, int any) {
    cout << endl;
    cout << "                               BEN FET " << nom << " HAS COL·LOCAT CORRECTAMENT LA CARTA " << descripcio << " (any " << any << ')' << endl;
    cout << endl;
}

void text_carta_incorrecte(string nom, string descripcio, int any) {
    cout << endl;
    cout << "                             LLÀSTIMA! " << nom << " NO HAS COL·LOCAT CORRECTAMENT LA CARTA " << descripcio << " (any " << any << ')' << endl;
    cout << endl;
    return;
}


void text_carta_robada(string nom, string descripcio) {
    cout << endl;
    cout << "                                              " << nom << " HAS ROBAT LA CARTA:  " << descripcio << endl;
    cout << endl;
    getchar();
    return;
}

void text_individual_victoria(string nom, int colocades, int sobrat) {
    system("clear");
    cout << "                                   ENHORABONA " << nom << " HAS ACONSEGUIT COL·LOCAR LES " << colocades << " I ENCARA T'HAN SOBRAT " << sobrat << " TORNS" << endl;
}

void text_individual_derrota(string nom, int queden) {
    system("clear");
    cout << "                                     LLÀSTIMA " << nom << " T'HA FALTAT COL·LOCAR " << queden << " CARTES PER GUANYAR LA PARTIDA" << endl;
}

