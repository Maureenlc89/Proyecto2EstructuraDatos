/* 
 * File:   NodoPila.h
 * Author: Jose Nunnez
 *
 * Created on 4 de abril de 2016, 05:27 PM
 */

#ifndef NODOPILA_H
#define	NODOPILA_H
#include <iostream>

class NodoPila {
public:
    NodoPila();
    virtual ~NodoPila();
    int getLongitud();
    bool getEstado();
    double getPrecio();
    NodoPila * getCabeza();
    void setLongitud(int);
    void setEstado(bool);
    void setPrecio(double);
    void setCabeza(NodoPila *);
private:
    int longitud;
    bool estado;
    double precio;
    NodoPila * cabeza;

};

#endif	/* NODOPILA_H */

