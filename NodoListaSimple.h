/* 
 * File:   NodoListaSimple.h
 * Author: Jose Nunnez
 *
 * Created on 4 de abril de 2016, 05:27 PM
 */

#ifndef NODOLISTASIMPLE_H
#define NODOLISTASIMPLE_H
#include <iostream>
using namespace std;

class NodoListaSimple {
public:
    NodoListaSimple(void);
    virtual ~NodoListaSimple();
    double getPrecio(void);
    bool getEstado(void);
    bool getPagado(void);
    NodoListaSimple*getSiguiente(void);
    NodoListaSimple*getAnterior(void);
    void setPrecio(double);
    void setEstado(bool);
    void setPagado(bool);
    void setSiguiente(NodoListaSimple*);
    void setAnterior(NodoListaSimple*);

private:

    double precio;
    bool estado;
    bool pagado;
    NodoListaSimple*siguiente;
    NodoListaSimple*anterior;
};

#endif /* NODOLISTASIMPLE_H */

