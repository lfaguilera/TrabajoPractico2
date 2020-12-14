#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"
#include <string>
using namespace std;

class Lista {
private:
    // atributos
    Nodo* primero;
    Nodo* actual;
    int cantidad;
    string elemento;

public:
    // constructor
    // pos: crea una cola vacia
    Lista();

    // pre: 0 < pos <= cantidad + 1
    // pos: inserta el dato d en la posicion pos, la 1 es la primera
    //        ademas incrementa cantidad en 1
    void alta(Dato d, int pos, string elemento);
    // pre: 0 < pos <= cantidad + 1
    // pos: inserta el dato d en la posicion pos, la 1 es la primera
    //        ademas incrementa cantidad en 1
    void altaAgua(PersonajeAire d, int pos);
    // pre: 0 < pos <= cantidad + 1
    // pos: inserta el dato d en la posicion pos, la 1 es la primera
    //        ademas incrementa cantidad en 1
    void altaAire(PersonajeTierra d, int pos);
    // pre: 0 < pos <= cantidad + 1
    // pos: inserta el dato d en la posicion pos, la 1 es la primera
    //        ademas incrementa cantidad en 1
    void altaTierra(PersonajeFuego d, int pos);
    // pre: 0 < pos <= cantidad + 1
    // pos: inserta el dato d en la posicion pos, la 1 es la primera
    //        ademas incrementa cantidad en 1
    void altaFuego(PersonajeAgua d, int pos);

    // pre: 0 < pos <= cantidad
    // pos: saca el elemento que esta en pos
    void baja(int pos);

    // pre: 0 < pos <= cantidad
    // pos: devuelve el elemento que esta en pos
    Dato consulta(int pos);


    bool vacia();

    // pos: libera la memoria
    virtual ~Lista();

    int obtener_cantidad();

    // reinicia el puntero actual a la primera posici�n (o nulo si la lista es vac�a).
    // PRE:
    // POS: pone el puntero a la primera posici�n o apuntando a NULL
    void reiniciar ( );

    // consulta si hay un elemento siguiente (si el actual no apunta a NULL)
    // PRE:
    // POS: devuelve true si el actual no apunta a NULL, false de lo contrario
    bool hay_siguiente ( );

    // devuelve el siguiente elemento (el elemento que apunta actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el elemento actual y avanza
    Dato siguiente ( );


    // pos: devuelve true si d esta en la lista, false de lo contrario
    bool esta(Dato d);


private:
    Nodo* obtener_nodo(int pos);
};


#endif // LISTA_H_INCLUDED
