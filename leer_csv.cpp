//
// Created by Usuario on 30/11/2020.
//




#include <iostream>
#include <fstream>
#include <string>

using namespace std;
/*
void leerArchivos() {
    ifstream archivo;

}
*/

struct Registro
{
    string elemento;
    string nombre;
    int escudo;
    int vida;
};

int leerArchivos()
{
    string filename = "personajes.csv";
    Registro registro{};
    float suma = 0, count = 0;
    char c;

    //cout << "\nNombre del archivo: ";
    //getline(cin, filename);

    fstream in(filename);

    if (!in.is_open())
        cout << "\nArchivo " + filename + " no encontrado." << endl;
    else
    {
        while (!in.eof())
        {
            in >> registro.elemento; in >> c;
            in >> registro.nombre; in >> c;
            in >> registro.escudo; in >> c;
            in >> registro.vida; in >> c;
            count++;
        }

    }
    return 0;
}
