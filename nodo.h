

#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

//typedef int Dato;
#include "personaje.h"
#include <string>
using namespace std;

class Nodo {
private:
    // atributos
    Personaje personaje;
    Nodo* siguiente;
public:
    // metodos
    // constructor
    // PRE:
    // POS: crea un nodo con personaje = p guarda la direccion del primer nodo en reset y siguiente = 0
    Nodo(string nombre, int escudo,int vidas,int energia);
    //PRE: El nodo exste
    //POS: Intercambia el personaje guardado por p
    void cambiar_dato(Personaje p);
    //PRE:Existe siguiente
    //POS: Cambia el nodo por el nodo al que apunta este
    void cambiar_siguiente(Nodo* s);
    //PRE: el personaje existe en la lista de personajes
    //POS: Devuelve las caracteristicas del personaje
    Personaje obtener_personaje(string nombre);

    Nodo* obtener_siguiente();
};

#endif // NODO_H_INCLUDED
