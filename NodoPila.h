/* 
 * File:   NodoPila.h
 * Author: Jose Nunnez
 *
 * Created on 4 de abril de 2016, 05:27 PM
 */
#ifndef NODOPILA_H
#define	NODOPILA_H
#include <string>
#include <iostream>
using namespace std;

class NodoPila {
public:
    NodoPila(bool, double, string);
    virtual ~NodoPila();
    bool getEstado();
    double getPrecio(void);
    string getTipoOcupado(void);
    NodoPila * getSiguiente();
    void setEstado(bool);
    void setPrecio(double);
    void setTipoOcupado(string);
    void setSiguiente(NodoPila *);
private:
    bool estado;
    double precio;
    string tipoOcupado;
    NodoPila * siguiente;

};

#endif	/* NODOPILA_H */



