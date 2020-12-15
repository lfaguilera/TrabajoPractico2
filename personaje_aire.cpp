#include "personaje_aire.h"


PersonajeAire::PersonajeAire() : Personaje(){
    alimento = "none";

}

void PersonajeAire::alimentar() {
    cout << "Los personajes de aire no necesitan alimentarse." << endl;
}