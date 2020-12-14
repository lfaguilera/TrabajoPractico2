//
// Created by Usuario on 14/12/2020.
//

#ifndef TRABAJOPRACTICO2_PERSONAJE_H
#define TRABAJOPRACTICO2_PERSONAJE_H
#include <iostream>
#include <string>

using namespace std;

typedef int Dato;

class Personaje {
protected:
    // atributos
    string nombre; // cadena
    size_t escudo; // (0, 1 o 2)
    size_t vidas; // [10, 100]
    size_t energia; // [0, 20]
    string elemento; // cadena

public:
    // metodos
    // constructor
    // PRE:
    // POS: crea un Personaje con sus atributos
    Personaje();
    //Devino el metodo alimentarse para luego redefinirlo
    //PRE:-
    //POS:-
    virtual void alimentarse();
};
#endif //TRABAJOPRACTICO2_PERSONAJE_H
