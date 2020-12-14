#include <iostream>
#include <string>

#include "personaje.h"

//using namespace std;



class PersonajeAire : public Personaje {
private:
    // atributos
    string nombre; // cadena

public:
    // metodos
    // constructor
    // PRE:
    // POS: crea un Personaje con sus atributos
    PersonajeAire(string nombre , Personaje personaje);
    //PRE:
    //POS: informa por consola que los personajes de aire no tienen la necesidad de hacerlo
    void alimentar();
};