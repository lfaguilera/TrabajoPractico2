//
// Created by Usuario on 14/12/2020.
//

#include "personaje.h"
Personaje::Personaje()  {
    nombre = "";
    escudo = 0;
    vidas = 0;
    energia = 0;
    alimento = "";
}

void Personaje::alimentarse() {
}

string Personaje::cadenaNombre() {
    return nombre;
}

void Personaje::nombrar(string nombreNuevo) {
    nombre = nombreNuevo;
}

void Personaje::mostrar() {

    cout<< "Nombre :\n\t" << nombre << endl;
    cout << "Escudo :\n\t" << escudo << endl;
    cout << "Vidas :\n\t" << vidas << endl;
    cout << "Energia :\n\t" << energia << endl;
    cout << "Elemento :\n\t" << elemento << endl;
}