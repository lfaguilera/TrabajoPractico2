#include <iostream>
#include <string>

#include "personaje.h"

using namespace std;

class PersonajeTierra : public Personaje {
private:
    // atributos
    string nombre; // cadena
    string alimento; // hierbas

public:
    // metodos
    // constructor
    // PRE:
    // POS: crea un Personaje con sus atributos
    PersonajeTierra(string nombre, Personaje personaje) ;
    //PRE:
    //POS: Aumenta en 8 la "energia" del peersonaje y lo informa por consola
    void alimentar();
};