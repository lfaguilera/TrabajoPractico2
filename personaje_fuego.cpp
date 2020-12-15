#include "personaje_fuego.h"


PersonajeFuego::PersonajeFuego() : Personaje() {
    alimento = "madera";

}


void PersonajeFuego::alimentar() {
    if ((energia += 15) > 20) {
        energia = 20;
        cout << "El personaje " << nombre << "llego al limite de energia." << endl;
    }
    cout << nombre << "incremento en 15 su energia." << endl;
}