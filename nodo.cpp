#include "nodo.h"

Nodo::Nodo(Dato d) {
    dato = d;
    siguiente = 0;
}

void Nodo::cambiar_dato(Dato d) {
    dato = d;
}

void Nodo::cambiar_siguiente(Nodo* s) {
    siguiente = s;
}

Dato Nodo::obtener_dato() {
    return dato;
}

Nodo* Nodo::obtener_siguiente() {
    return siguiente;
}
