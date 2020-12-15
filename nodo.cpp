#include "nodo.h"

Nodo::Nodo(Personaje p) {
    dato = p;
    siguiente = 0;
}

void Nodo::cambiar_dato(Personaje p) {
    dato = p;
}

void Nodo::cambiar_siguiente(Nodo* s) {
    siguiente = s;
}

Personaje Nodo::obtener_dato() {
    return dato;
}

Nodo* Nodo::obtener_siguiente() {
    return siguiente;
}
