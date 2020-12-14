#ifndef LISTA_H
#define LISTA_H

#include "personaje.h"

class Lista {
private:
    static constexpr int MAX = 100;
    int cont;
    Personaje* array[MAX];
public:
    Lista();
    Lista(const Lista&);
    virtual Lista& operator=(const Lista&);
    virtual ~Lista();
    virtual bool llena() const;
    virtual bool vacia() const;
    virtual bool insertar (Personaje*);
    virtual bool recuperar(int, Personaje**) const;
    virtual void mostrar() const;
};

#endif /* LISTA_H */
