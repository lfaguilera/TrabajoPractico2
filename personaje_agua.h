#ifndef TRABAJO_PRACTICO_2_PERSONAJE_AGUA_H
#define TRABAJO_PRACTICO_2_PERSONAJE_AGUA_H
#include <iostream>
#include <string>

#include "personaje.h"

using namespace std;


class PersonajeAgua : protected Personaje {
protected:
    // atributos
    string nombre; // cadena
    string alimento; // plancton
    size_t veces_alimentado; // cantidad de veces que se alimento

public:
    // metodos
    // constructor
    // PRE:
    // POS: crea un Personaje con sus atributos
    PersonajeAgua(string nombre , Personaje personaje) ;
    //PRE: El personaje existe 20 la "energia" del personaje
    void alimentar();
};

#endif //TRABAJO_PRACTICO_2_PERSONAJE_AGUA_H