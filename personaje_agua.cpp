
#include "personaje_agua.h"

PersonajeAgua::PersonajeAgua() : Personaje() {
    alimento = "plancton";
    veces_alimentado = 0;
}


void PersonajeAgua::alimentar() {
    if ((veces_alimentado < 3) && ((energia += 10) > 20)) {
        cout << "El personaje " << nombre << " ya no puede alimentarse mas." << endl;
        energia = 20;
    }
}