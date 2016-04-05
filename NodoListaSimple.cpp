/* 
 * File:   NodoListaSimple.cpp
 * Author: Jose Nunnez
 * 
 * Created on 4 de abril de 2016, 05:27 PM
 */

#include "NodoListaSimple.h"

NodoListaSimple::NodoListaSimple() {
    setPrecio(0.0);
    setLongitud(0);
    setEstado(false);
    setSiguiente(NULL);
    setAnterior(NULL);
}

NodoListaSimple::~NodoListaSimple() {
}

double NodoListaSimple::getPrecio(void) {
    return precio;
}

int NodoListaSimple::getLongitud(void) {
    return longitud;
}

bool NodoListaSimple::getEstado(void) {
    return estado;
}

NodoListaSimple*NodoListaSimple::getSiguiente(void) {
    return siguiente;
}

NodoListaSimple*NodoListaSimple::getAnterior(void) {
    return anterior;
}

void NodoListaSimple::setPrecio(double pprecio) {
    precio=pprecio;
}

void NodoListaSimple::setLongitud(int plongitud) {
    longitud = plongitud;
}

void NodoListaSimple::setEstado(bool pestado) {
    estado=pestado;
}

void NodoListaSimple::setSiguiente(NodoListaSimple* psiguiente) {
    siguiente=psiguiente;
}

void NodoListaSimple::setAnterior(NodoListaSimple* panterior) {
    anterior =panterior;
}