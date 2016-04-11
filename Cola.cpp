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
#include "NodoListaSimple.h"

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
    longitud = plongitud;
}

void Cola::setFrente(NodoCola*pfrente) {
    frente = pfrente;
}

void Cola::setFinal(NodoCola* pfinal) {

    final = pfinal;
}

bool Cola::esVacia() {
    return getFrente() == NULL;
}

void Cola::insertarElemento(NodoCola*pnodo) {



    if (this->esVacia()) {

        frente = pnodo;

        final = pnodo;

    } else {

        final->setSiguiente(pnodo);

        final = pnodo;

    }

    longitud++;

}

void Cola::mostrarCola() {

    if (!esVacia()) {

        NodoCola *aux = getFrente();
        if (aux != NULL) {
            cout << "En este momento tenemos " << getLongitud() << " Solicitudes en cola de espera." << endl;
            aux = aux->getSiguiente();

        }



    }

}

void Cola::eliminarElemento(void) {

    NodoCola * aux = getFrente();

    if (!esVacia()) {
    
            setFrente(aux->getSiguiente());
            setLongitud(longitud = longitud-1);
            cout << "Longitud de cola  "<< getLongitud() << endl;
            delete aux;
    } 


}