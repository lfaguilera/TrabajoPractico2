//
// Created by Usuario on 26/11/2020.
//

#ifndef TRABAJO_PRACTICO_2_MENU_H
#define TRABAJO_PRACTICO_2_MENU_H

#include <iostream>
#include <string>
#include "lista.h"
using namespace std;

class menu {
private:
    int eleccion;
    int index;
    string elemento;
    string nombre;

public:
    menu();
    void opciones(Lista Personajes);
    void agregarPersonaje (string elemento);
    void eliminarPersonaje (string nombreBorrar , Lista listaPersonajes);
    void mostrarTodos (Lista listaPersonajes);
    void buscarNombre (string nombreBuscado , Lista listaPersonajes);
    void alimentarPersonaje (string nombre) ;
    int salir ();
    void loop(menu elegir , Lista listaPersonajes);
};


#endif //TRABAJO_PRACTICO_2_MENU_H
