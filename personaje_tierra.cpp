#include "personaje_tierra.h"


PersonajeTierra::PersonajeTierra(): Personaje() {
    alimento = "hierbas";
}


void PersonajeTierra::alimentar() {
    if ((energia += 8) > 20) {
        energia = 20;
        cout << "El personaje " << nombre << "llego al limite de energia." << endl;
    }
    cout << nombre << "incremento en 8 su energia." << endl;
}