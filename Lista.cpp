
#include "Lista.h"
#include "personaje.h"

Lista::Lista() : cont{0} {
}

Lista::Lista(const Lista& orig) {
    cont = orig.cont;
    for (int i = 0; i < cont; i++) {
        array[i] = orig.array[i] -> clon();
    }
}

Lista& Lista::operator=(const Lista& orig) {
    for (int i = 0; i < cont; i++) {
        delete array[i];
    }
    cont = orig.cont;
    for (int i = 0; i < cont; i++) {
        array[i] = orig.array[i] -> clon();
    }
    return *this;
}

Lista::~Lista() {
    for (int i = 0; i < cont; i++) {
        delete array[i];
    }
}

bool Lista::llena() const {
    return cont == MAX;
}

bool Lista::vacia() const {
    return cont == 0;
}

bool Lista::insertar (Persona* p) {
    if (cont == MAX) {
        return false;
    } else {
        array[cont] = p->clon();
        cont++;
        return true;
    }
}

bool Lista::recuperar(int pos, Personaje** p) const {
    if (pos < 0 || pos >= cont) {
        return false;
    } else {
        *p = array[pos];
        return true;
    }
}

void Lista::mostrar() const {
    cout << "===============" << endl;
    cout << "Elementos de la lista:" << endl << endl;
    for (int i = 0; i < cont; i++) {
        array[i] -> mostrar();
        cout << endl;
    }
    cout << "===============" << endl;
}
