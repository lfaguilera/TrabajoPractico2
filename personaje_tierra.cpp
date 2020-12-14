#include "personaje_tierra.h"


PersonajeTierra::PersonajeTierra(string nombre, Personaje personaje) {
    nombre = nombre;
    alimento = "hierbas";
}


void PersonajeTierra::alimentar() {
    if ((energia += 8) > 20) {
        energia = 20;
        cout << nombre << "esta en el limite de energia." << endl;
    }
    cout << nombre << "incremento en 8 su energia." << endl;
}