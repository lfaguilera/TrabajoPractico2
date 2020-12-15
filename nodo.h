#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

#include <string>
#include "personaje_agua.h"
#include "personaje_tierra.h"
#include "personaje_fuego.h"
#include "personaje_aire.h"

typedef std::string Dato;

class Nodo {
private:
    // atributos
    Personaje dato;
    Nodo* siguiente;
    Nodo* anterior;

public:
    // metodos
    // constructor
    // PRE:
    // POS: crea un nodo con dato = d y siguiente = 0
    Nodo(Personaje p);

    void cambiar_dato(Personaje p);

    void cambiar_siguiente(Nodo* s);

    Personaje obtener_dato();

    Nodo* obtener_siguiente();
};

#endif // NODO_H_INCLUDED
