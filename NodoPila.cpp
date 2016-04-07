/* 
 * File:   NodoPila.cpp
 * Author: Jose Nunnez
 * 
 * Created on 4 de abril de 2016, 05:27 PM
 */

#include "NodoPila.h"
#include <string>
using namespace std;

NodoPila::NodoPila(bool pestado, double precio, string tipoOcupado) {
    setEstado(pestado);
    setPrecio(precio);
    setTipoOcupado(tipoOcupado);
    setSiguiente(NULL);
}

NodoPila::~NodoPila() {
}

bool NodoPila::getEstado() {
    return estado;
}

double NodoPila::getPrecio() {
    return precio;
}

string NodoPila::getTipoOcupado(void) {
    return tipoOcupado;
}

NodoPila * NodoPila::getSiguiente() {
    return siguiente;
}

void NodoPila::setEstado(bool pestado) {
    estado = pestado;
}

void NodoPila::setPrecio(double pprecio) {
    precio = pprecio;
}

void NodoPila::setTipoOcupado(string ptipo) {
    tipoOcupado = ptipo;
}

void NodoPila::setSiguiente(NodoPila * pcabeza) {
    siguiente = pcabeza;
}