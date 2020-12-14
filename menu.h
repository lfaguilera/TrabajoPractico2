//
// Created by Usuario on 26/11/2020.
//

#ifndef TRABAJO_PRACTICO_2_MENU_H
#define TRABAJO_PRACTICO_2_MENU_H

#include <iostream>
#include <string>
using namespace std;

class menu {
private:
    int eleccion;
    int index;
    string elementos[4] = {"agua","fuego","tierra","aire"};
    string elemento;
    string nombre;
public:
    void elegir();
    void agregarPersonaje (elemento);
    void eliminarPersonaje (string nombre);
    void mostrarTodos ();
    void buscarNombre (string nombre);
    void alimentarPrsonaje (string nombre) ;
    int salir ();
    void loop(menu elegir);
};


#endif //TRABAJO_PRACTICO_2_MENU_H
