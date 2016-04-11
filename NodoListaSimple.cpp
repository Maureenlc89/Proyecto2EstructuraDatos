/* 
 * File:   NodoListaSimple.cpp
 * Author: Jose Nunnez
 * 
 * Created on 4 de abril de 2016, 05:27 PM
 */

#include "NodoListaSimple.h"

//NodoListaSimple::NodoListaSimple() {
//    setPrecio(5500.00);
//    setEstado(true);
//    setSiguiente(NULL);
//    setAnterior(NULL);
//    setPagado(false);
//}

NodoListaSimple::NodoListaSimple(bool pago , bool estado) {
    setPrecio(5500.00);
    setEstado(estado);
    setSiguiente(NULL);
    setAnterior(NULL);
    setPagado(pago);
} 

NodoListaSimple::~NodoListaSimple() {
}

double NodoListaSimple::getPrecio(void) {
    return precio;
}

bool NodoListaSimple::getEstado(void) {
    return estado;
}

bool NodoListaSimple::getPagado(void) {
    return pagado;
}

NodoListaSimple*NodoListaSimple::getSiguiente(void) {
    return siguiente;
}

NodoListaSimple*NodoListaSimple::getAnterior(void) {
    return anterior;
}

void NodoListaSimple::setPrecio(double pprecio) {
    precio = pprecio;
}

void NodoListaSimple::setEstado(bool pestado) {
    estado = pestado;
}

void NodoListaSimple::setPagado(bool ppago) {
    pagado = ppago;
}

void NodoListaSimple::setSiguiente(NodoListaSimple* psiguiente) {
    siguiente = psiguiente;
}

void NodoListaSimple::setAnterior(NodoListaSimple* panterior) {
    anterior = panterior;
}
