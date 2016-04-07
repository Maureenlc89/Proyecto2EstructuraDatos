/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCola.cpp
 * Author: Maureen
 * 
 * Created on 6 de abril de 2016, 10:05 PM
 */

#include "NodoCola.h"

NodoCola::NodoCola() {
     setSiguiente(NULL);
     setEstado(false);
     setPrecio(0.0);
     setLocalidad(0);
}

NodoCola::NodoCola(const NodoCola& orig) {
    
}

NodoCola::~NodoCola() {
}

NodoCola * NodoCola::getSiguiente() {

}

bool NodoCola::getEstado() {
    return estado;
}

double NodoCola::getPrecio() {
    return precio;
}

int NodoCola::getLocalidad() {
    return localidad;
}

void NodoCola::setSiguiente(NodoCola* psiguiente) {
    siguiente = psiguiente;
}

void NodoCola::setEstado(bool pestado) {
    estado = pestado;
}

void NodoCola::setPrecio(double pprecio) {
    precio = pprecio;
}

void NodoCola::setLocalidad(int plocalidad) {
    localidad = plocalidad;
}
