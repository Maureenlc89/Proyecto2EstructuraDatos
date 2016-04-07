/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaLocalidadGeneral.cpp
 * Author: Maureen
 * 
 * Created on 6 de abril de 2016, 08:38 PM
 */

#include "ListaLocalidadGeneral.h"

ListaLocalidadGeneral::ListaLocalidadGeneral() {

    setLongitud(0);
    setCabeza(NULL);

}

ListaLocalidadGeneral::ListaLocalidadGeneral(const ListaLocalidadGeneral& orig) {
}

ListaLocalidadGeneral::~ListaLocalidadGeneral() {
}

int ListaLocalidadGeneral::getLongitud(void) {
    return longitud;
}

NodoListaSimple* ListaLocalidadGeneral::getCabeza(void) {
    return cabeza;
}

void ListaLocalidadGeneral::setLongitud(int plongitud) {
    longitud = plongitud;
}

void ListaLocalidadGeneral::setCabeza(NodoListaSimple* pcabeza) {
    cabeza = pcabeza;
}

bool ListaLocalidadGeneral::reservarEspacio() {

    if (longitud >= 50) {
        return false;
    } else {
        NodoListaSimple* nuevo = new NodoListaSimple();
        if (this->esVacia()) {
            setCabeza(nuevo);
        } else {
            nuevo->getSiguiente();
            setCabeza(nuevo);
        }

        longitud++;
        return true;
    }

}

bool ListaLocalidadGeneral::esVacia() {
    return getCabeza() == NULL;
}

void ListaLocalidadGeneral::mostrarLista() {
    if (!esVacia()) {

        NodoListaSimple *aux = getCabeza();
        int i = 0;
        cout << "Informacion de la reserva" << endl;
        while (aux != NULL) {
            cout << "Posicion: " << getLongitud() << endl;
            cout << "Precio: " << aux->getPrecio() << endl;
            if (aux->getEstado() == true) {
                cout << "Estado: Reservado" << endl;
            }
            if (aux->getPagado() == false) {
                cout << "Pendiente de pago" << endl;
            } else {
                cout << "Sin cargos pendientes" << endl;
            }

            i++;
            aux = aux->getSiguiente();
        }
        cout << "Numero espacios disponibles: " << 50 - getLongitud() << endl;
        cout << " " << endl;

    } else {
        cout << "La lista se encuentra vacia." << endl;
    }
}