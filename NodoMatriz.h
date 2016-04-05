/* 
 * File:   NodoMatriz.h
 * Author: Jose Nunnez
 *
 * Created on 4 de abril de 2016, 05:26 PM
 */

#ifndef NODOMATRIZ_H
#define	NODOMATRIZ_H
#include <iostream>

class NodoMatriz {
public:
    NodoMatriz();
    virtual ~NodoMatriz();
    int getlongitud(void);
    int getNumero(void);
    double getPrecio(void);
    NodoMatriz * getSiguiente(void);
    void setlongitud(int);
    void setNumero(int);
    void setPrecio(double);
    void  setSiguiente(NodoMatriz *);
    
private:

    int longitud;
    int numero;
    double precio;
    NodoMatriz * siguiente;
    
};

#endif	/* NODOMATRIZ_H */

