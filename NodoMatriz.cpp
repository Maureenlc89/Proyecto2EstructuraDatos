/* 
 * File:   NodoMatriz.cpp
 * Author: Jose Nunnez
 * 
 * Created on 4 de abril de 2016, 05:26 PM
 */
#include "NodoMatriz.h"

NodoMatriz::NodoMatriz() {

     setlongitud(0);
     setNumero(0);
     setPrecio(0.0);
     setSiguiente(NULL);
}

NodoMatriz::~NodoMatriz() {

}

int NodoMatriz::getlongitud(void) {
    return longitud;
}

int NodoMatriz::getNumero(void) {
    return numero;
}

double NodoMatriz::getPrecio(void) {
    return precio;
}

NodoMatriz * NodoMatriz::getSiguiente(void) {
    return siguiente;
}

void NodoMatriz::setlongitud(int plongitud) {
    longitud = plongitud;
}

void NodoMatriz::setNumero(int pnumero) {
    numero = pnumero;
}

void NodoMatriz::setPrecio(double pprecio) {
    precio=pprecio;
}

void NodoMatriz::setSiguiente(NodoMatriz* psiguiente) {
    siguiente = psiguiente;
}

