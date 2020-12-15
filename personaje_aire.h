

#include "personaje.h"



class PersonajeAire : public Personaje {
private:
    // atributos
    /*
    string nombre; // cadena
    */
public:
    // metodos
    // constructor
    // PRE:
    // POS: crea un Personaje con sus atributos
    PersonajeAire();
    //PRE:
    //POS: informa por consola que los personajes de aire no tienen la necesidad de hacerlo
    void alimentar();
};