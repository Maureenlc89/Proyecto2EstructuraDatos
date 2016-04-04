/* 
 * File:   NodoListaSimple.h
 * Author: Jose Nunnez
 *
 * Created on 4 de abril de 2016, 05:27 PM
 */

#ifndef NODOLISTASIMPLE_H
#define	NODOLISTASIMPLE_H

class NodoListaSimple {
public:
    NodoListaSimple(void);
    virtual ~NodoListaSimple();
    double getPrecio(void);
    int getLongitud(void);
    bool getEstado(void);
    NodoListaSimple*getSiguiente(void);
    NodoListaSimple*getAnterior(void);
    void setPrecio(double);
    void setLongitud(int);
    void setEstado(bool);
    void setSiguiente(NodoListaSimple*);
    void setAnterior(NodoListaSimple*);
private:
    double precio;
    int longitud;
    bool estado;
    NodoListaSimple*siguiente;
    NodoListaSimple*anterior;
};

#endif	/* NODOLISTASIMPLE_H */

