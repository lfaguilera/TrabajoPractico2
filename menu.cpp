//
// Created by Usuario on 26/11/2020.
//
#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

menu::menu() {
    eleccion = 0;
    index = 0;
    elemento = "none";
    nombre = "none";
}

void menu::opciones(Lista listaPersonajes) {
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
            cin >> elemento;
            elegir.agregarPersonaje(elemento);
            break;
        }
        case 2: {
            string nombreBorrar;
            cout<<"\n Cual personaje quiere eliminar : ";
            cin>> nombreBorrar ;
            elegir.eliminarPersonaje(nombreBorrar , listaPersonajes);
            break;
        }
        case 3: {
            elegir.mostrarTodos(listaPersonajes);
            break;
        }
        case 4: {
            cout<<"\n Cual personaje quiere ver : ";
            cin>>nombre;
            elegir.buscarNombre(nombre , listaPersonajes);
            break;
        }
        case 5: {
            cout<<"\n Cual personaje quiere alimentar : ";
            cin>>nombre;
            elegir.alimentarPersonaje(nombre);
            break;
        }
        case 6: {
            elegir.salir();
            break;
        }
        default: {
            elegir.loop(elegir , listaPersonajes);
        }
    }


}


void menu::agregarPersonaje(string elementoAgregar) {
    cout << "Agregar nuevo personaje\n" << endl;
    string elementos[4] = {"agua","fuego","tierra","aire"};

    if (elementoAgregar == "none") {
        index = rand()% 3 - 0;
        elemento = elementos[index];
    } else {
        if (elementoAgregar == "aire"){
            index = 3 ;
        }
        if (elementoAgregar == "tierra"){
            index = 2;
        }
        if (elementoAgregar == "fuego"){
            index = 1;
        }
        if (elementoAgregar == "agua"){
            index = 0;
        }
    }

    cout << "Cargue un nombre de personaje : " << endl;
    cin >> nombre ;

    switch (index) {
        case 0 : {
            PersonajeAgua agua;
            agua.nombrar(nombre);
            cout << "Este es el personaje creado : \n" << endl;
            agua.mostrar();
            break;
        }
        case 1 : {
            PersonajeFuego fuego;
            fuego.nombrar(nombre);
            cout << "Este es el personaje creado : \n" << endl;
            fuego.mostrar();
            break;
        }
        case 2 : {
            PersonajeTierra tierra;
            tierra.nombrar(nombre);
            cout << "Este es el personaje creado : \n" << endl;
            tierra.mostrar();
            break;
        }
        case 3 : {
            PersonajeAire aire;
            aire.nombrar(nombre);
            cout << "Este es el personaje creado : \n" << endl;
            aire.mostrar();

            break;
        }
    }


}


void menu::eliminarPersonaje(string nombreBorrar , Lista listaPersonajes) {
    cout << "Eliminar personaje\n" << endl;
    for(int i = 1; i <= listaPersonajes.obtener_cantidad(); i++)
        if (nombre == listaPersonajes.consulta(i).cadenaNombre() ){
            listaPersonajes.consulta(i).mostrar();
        }

}

void menu::mostrarTodos(Lista listaPersonajes) {
    cout << "Mostrar todos los nombres de personajes\n" << endl;
}

void menu::buscarNombre(string nombreBuscado , Lista listaPersonajes) {
    for(int i = 1; i <= listaPersonajes.obtener_cantidad(); i++)
        if (nombre == listaPersonajes.consulta(i).cadenaNombre() ){
            listaPersonajes.consulta(i).mostrar();
        }

    cout << "Buscar por nombre los detalles de un personaje particular\n" << endl;
}

void menu::alimentarPersonaje(string cadena) {
    cout << "Alimentar un personaje\n" << endl;

    switch (index) {
        case 0: {
            PersonajeAgua Agua;
            Agua.alimentar();
            break;
        }
        case 1:{
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

}

int menu::salir() {
    cout << "Salir\n" << endl;
    return 0;
}

void menu::loop(menu elegir , Lista listaPersonajes) {
    cout<< "\n!!! la opcion ingresada es invalida !!!\n"
           "\t\tintentelo nuevamente\n"<<endl;
    elegir.opciones(listaPersonajes);
}