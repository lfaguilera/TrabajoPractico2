#include "personaje_aire.h"


PersonajeAire::PersonajeAire(string nombre, Personaje personaje) : Personaje(){
    nombre = nombre;

}

void PersonajeAire::alimentar() {
    cout << "Los personajes de aire no necesitan alimentarse." << endl;
}