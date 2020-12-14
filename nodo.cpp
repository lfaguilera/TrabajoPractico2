

#include "nodo.h"

Nodo::Nodo(string nombre, int escudo,int vidas,int energia) {
    Personaje ;
    personaje ;
    siguiente = 0;
}

void Nodo::cambiar_dato(Personaje p) {
    personaje = p;
}

void Nodo::cambiar_siguiente(Nodo* s) {
    siguiente = s;
}

Personaje Nodo::obtener_personaje(string nombre) {
    return personaje;
}

Nodo* Nodo::obtener_siguiente() {
    return siguiente;
}
