#include "personaje_fuego.h"


PersonajeFuego::PersonajeFuego(string nombre, Personaje personaje) : Personaje() {
    nombre = nombre;
    alimento = "madera";

}


void PersonajeFuego::alimentar() {
    if ((energia += 15) > 20) {
        energia = 20;
        cout << nombre << "esta en el limite de energia." << endl;
    }
    cout << nombre << "incremento en 15 su energia." << endl;
}