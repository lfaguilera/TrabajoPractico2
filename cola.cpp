#include <iostream>
#include "cola.h"

Cola::Cola() {
    primero = 0;
    ultimo = 0;
}

void Cola::alta(Personaje p) {
    Nodo* nuevo = new Nodo(p);
    if (vacia())
        primero = nuevo;
    else
        ultimo->cambiar_siguiente(nuevo);
    ultimo = nuevo;
}

void Cola::baja() {
    Nodo* borrar = primero;
    primero = borrar->obtener_siguiente();
    if (! primero)
        ultimo = 0;
    delete borrar;
}

Personaje Cola::consulta() {
    return primero->obtener_dato();
}

bool Cola::vacia() {
    return (ultimo == 0);
}

Cola::~Cola() {
    std::cout << "Ejecutando el destructor " << std::endl;
    while (! vacia())
        baja();
}

