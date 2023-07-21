#include <iostream>
#include <stdlib.h>
using namespace std;


void escriu_pagina_inicial();

int selecciona_mode_joc();

void escriu_instruccions();

void text_inici_partida_individual();

string nom_individual();

string nom_individual();

int dificultat_individual(string nom);

void inici_taula();

void text_repartir_inici();

int accio_a_fer();

int text_jugar_carta_id(int n);

int text_jugar_carta_pos(int n);

void text_carta_correcte(string nom, string descripcio, int any);

void text_carta_incorrecte(string nom, string descripcio, int any);

void text_carta_robada(string nom, string descripcio);

void text_individual_victoria(string nom, int colocades, int sobrat);

void text_individual_derrota(string nom, int queden);