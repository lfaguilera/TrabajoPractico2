#include <iostream>

#include "leer_csv.cpp"

#include "menu.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    leerArchivos();
    menu opciones;
    opciones.elegir();
    return 0;
}

