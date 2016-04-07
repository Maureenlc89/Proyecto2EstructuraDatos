/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.cpp
 * Author: Maureen
 * 
 * Created on 6 de abril de 2016, 10:10 PM
 */

#include "Cola.h"

Cola::Cola() {
    setLongitud(0);
    setFrente(NULL);
    setFinal(NULL);
}

Cola::Cola(const Cola& orig) {
}

Cola::~Cola() {
}

int Cola::getLongitud(void) {
    
    return longitud;
}

NodoCola * Cola::getFrente(void) {
    return frente;
}

NodoCola * Cola::getFinal(void) {
    return final;
}

void Cola::setLongitud(int plongitud) {
    longitud =plongitud;
}

void Cola::setFrente(NodoCola*pfrente) {
    frente = pfrente;
}

void Cola::setFinal(NodoCola* pfinal) {
    final = pfinal;
}

void Cola::insertarElemento(NodoCola*) {

}

void Cola::eliminarElemento(void) {
}