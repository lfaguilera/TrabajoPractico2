
#include "personaje_agua.h"

PersonajeAgua::PersonajeAgua(string nombre , Personaje personaje) : Personaje() {
    nombre = nombre;
    alimento = "plancton";
    veces_alimentado = 0;
}


void PersonajeAgua::alimentar() {
    if ((veces_alimentado < 3) && ((energia += 10) > 20)) {
        cout << nombre << "no puede alimentarse mas." << endl;
        energia = 20;
    }
}