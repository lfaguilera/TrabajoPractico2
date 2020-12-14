//
// Created by Usuario on 26/11/2020.
//

#include <string>
#include "menu.h"
#include "personaje_agua.h"
#include "personaje_aire.h"
#include "personaje_fuego.h"
#include "personaje_tierra.h"
#include "Lista.h"


using namespace std;

void menu::elegir() {
    menu elegir;
    cout<<"1. Agregar un nuevo personaje.\n"
          "2. Eliminar un personaje.\n"
          "3. Mostrar todos los nombres de los personajes.\n"
          "4. Buscar por nombre los detalles de un personaje en particular.\n"
          "5. Alimentar un personaje.\n"
          "6. Salir.\n"<<endl;

    cout << "Seleccione una opcion valida :  ";
    cin >> eleccion;
    switch (eleccion) {
        case 1: {
            string elemental;
            cout<<"que elemento [agua|fuego|tierra|aire] "<<endl;
            cin >> elemental;
            elegir.agregarPersonaje(elemental);
            break;
        }
        case 2: {
            cout<<"\n Cual personaje quiere eliminar : ";
            cin>>nombre;
            elegir.eliminarPersonaje(nombre);
            break;
        }
        case 3: {
            elegir.mostrarTodos();
            break;
        }
        case 4: {
            cout<<"\n Cual personaje quiere ver : ";
            cin>>nombre;
            elegir.buscarNombre(nombre);
            break;
        }
        case 5: {
            cout<<"\n Cual personaje quiere alimentar : ";
            cin>>nombre;
            elegir.alimentarPrsonaje(nombre);
            break;
        }
        case 6: {
            elegir.salir();
            break;
        }
        default: {
            elegir.loop(elegir);
        }
    }


}

void menu::agregarPersonaje(string elemento) {
    cout << "Agregar nuevo personaje\n" << endl;

    if (elemento == "none") {
        index = rand()% 3 - 0;
        elemento = elementos[index];
    } else {
        if (elemento == "aire"){
            index = 3 ;
        }
        if (elemento == "tierra"){
            index = 2;
        }
        if (elemento == "fuego"){
            index = 1;
        }
        if (elemento == "agua"){
            index = 0;
        }
    }

    switch (index) {
        case 0 : {
            PersonajeAgua Agua;
            Agua.agregarPersonaje();
            break;
        }
        case 1 : {
            PersonajeFuego Fuego;
            Fuego.agregarPersonaje();
            break;
        }
        case 2 : {
            PersonajeTierra Tierra;
            Tierra.agregarPersonaje();
            break;
        }
        case 3 : {
            lista<PersonajeAire>Aire;
            Aire.agregarPersonaje();
            break;
        }
    }

}

void menu::eliminarPersonaje(string nombre) {
    cout << "Eliminar personaje\n" << endl;
}

void menu::mostrarTodos() {
    cout << "Mostrar todos los nombres de personajes\n" << endl;
}

void menu::buscarNombre(string nombre) {
    cout << "Buscar por nombre los detalles de un personaje particular\n" << endl;
}

void menu::alimentarPrsonaje(nodo nombre) {
    cout << "Alimentar un personaje\n" << endl;
    nobre.eliminar();
    /*
    switch (index) {
        case "aire": {
            PersonajeAgua Agua;
            Agua.alimentar();
            break;
        }
        case :{
            PersonajeFuego Fuego;
            Fuego.alimentar();
            break;
        }
        case 2:{
            PersonajeTierra Tierra;
            Tierra.alimentar();
        }
        case 3:{
            PersonajeAire Aire;
            Aire.alimentar();
        }

    }
     */

}

int menu::salir() {
    cout << "Salir\n" << endl;
    return 0;
}

void menu::loop(menu elegir) {
    cout<< "\n!!! la opcion ingresada es invalida !!!\n"
           "\t\tintentelo nuevamente\n"<<endl;
    elegir.elegir();
}