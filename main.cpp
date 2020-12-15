#include <iostream>

#include "leer_csv.cpp"

#include "menu.h"



int main() {
    std::cout << "Hello, World!" << std::endl;
    Lista listaPersonajes;
    leerArchivos();
    menu elegir;
    elegir.opciones(listaPersonajes);


    return 0;
}

