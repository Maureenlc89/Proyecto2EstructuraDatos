/* 
 * File:   NodoPila.cpp
 * Author: Jose Nunnez
 * 
 * Created on 4 de abril de 2016, 05:27 PM
 */

#include "NodoPila.h"

NodoPila::NodoPila() {
   setLongitud(0);
    setEstado(false);
    setPrecio(0.0);
    setCabeza(NULL);
}

NodoPila::NodoPila(const NodoPila& orig) {
}

NodoPila::~NodoPila() {
}

int NodoPila::getLongitud(){
    return longitud;
}
bool NodoPila::getEstado(){
    return estado;
}
double NodoPila::getPrecio(){
    return precio;
}
NodoPila * NodoPila::getCabeza(){
    return cabeza;
}
void NodoPila::setLongitud(int plongitud){
    longitud = plongitud;
}
void NodoPila::setEstado(bool pestado){
    estado = pestado;
}
void NodoPila::setPrecio(double pprecio){
    precio = pprecio;
}
void NodoPila::setCabeza(NodoPila * pcabeza){
    cabeza = pcabeza;
}