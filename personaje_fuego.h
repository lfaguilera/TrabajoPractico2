#include <iostream>
#include <string>

#include "personaje.h"

using namespace std;

class PersonajeFuego : public Personaje {
private:
    // atributos
    string nombre; // cadena
    string alimento; // madera


public:
    // metodos
    // constructor
    // PRE:
    // POS: crea un Personaje con sus atributos
    PersonajeFuego(string nombre, Personaje personaje);
    //PRE: el personaje existe
    //POS Aumenta en 15 la "vida" del personaje y lo informa por consola
    void alimentar();
};