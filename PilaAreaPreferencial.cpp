/* 
 * File:   PilaAreaPreferencial.cpp
 * Author: Jose Nunnez
 * 
 * Created on 7 de abril de 2016, 03:41 PM
 */


#include "PilaAreaPreferencial.h"
#include "NodoPila.h"
#include <iostream>
#include <cstddef>
using namespace std;

PilaAreaPreferencial::PilaAreaPreferencial() {
    longitud = 0;
    setTope(NULL);
}

PilaAreaPreferencial::~PilaAreaPreferencial() {
}

void PilaAreaPreferencial::setLongitud(void) {
    this->longitud++;

}

int PilaAreaPreferencial::getLongitud(void) {
    return longitud;
}

void PilaAreaPreferencial::setTope(NodoPila* ptope) {
    this->tope = ptope;
}

NodoPila* PilaAreaPreferencial::getTope(void) {
    return tope;
}

bool PilaAreaPreferencial::esVacia(void) { //consulta si la pila está vacía

    bool result = false;

    if (this->getTope() == NULL) {
        result = true;
    } else {
        result = false;
    }
    return result;

}
//Métodos del TAD

bool PilaAreaPreferencial::insertar(bool pestado, double precio, string tipoOcupado) {//Se inserta siempre por el tope
    NodoPila *nuevo = new NodoPila(pestado, precio, tipoOcupado);
    bool result = false;
    if (this->esVacia()) {
        tope = nuevo;
        result = true;
    } else {
        nuevo->setSiguiente(tope);
        tope = nuevo;
        result = true;
    }
    this->setLongitud();
    return result;
}

bool PilaAreaPreferencial::eliminar(void) { //Se elimina siempre por el tope
    bool result = false;
    if (this->esVacia()) {
        cout << "Pila Vacía" << endl;
        result = false;
    } else {
        NodoPila *auxTope = tope;
        tope = tope->getSiguiente();
        longitud--;
        delete auxTope;
        result = true;
    }
    return result;
}

void PilaAreaPreferencial::consultarTope(void) { //Consulta al elemento del tope

    if (this->esVacia()) {
        cout << "Pila Vacia" << endl;
    } else {
        NodoPila *auxTope = this->getTope();
        bool estado = auxTope->getEstado();
        double precio = auxTope->getPrecio();
        string tipoOcupado = auxTope->getTipoOcupado();
        if (estado == true) {
            cout << "El asiento está ocupado, de forma de: " << tipoOcupado << endl; //Reservado o comprado
        } else {
            cout << "El asiento está desocupado" << endl;
        }
        cout << "El precio es de: " << precio << endl;
    }
}

bool PilaAreaPreferencial::liberarReservaciones(void) {

    if (this->esVacia()) {
        cout << "Area preferencial esta vacia" << endl;
    } else {
        NodoPila *auxTope = this->getTope();
        int bandera = this->getLongitud();
        while (bandera != 0) {
            auxTope->setEstado(false);
            auxTope = auxTope -> getSiguiente();
            bandera--;
        }
    }

}

double PilaAreaPreferencial::iniciarFuncion(void) {
    //Este metodo retorna el resultado de multiplicar la totalidad de asientos comprados por el precio
    double totalZonaPreferencial = 0;
    if (this->esVacia()) {
        cout << "Area preferencial esta vacia" << endl;
    } else {
        NodoPila *auxTope = this->getTope();
        int bandera = this->getLongitud();
        double precio = 0;
        while (bandera != 0) {
            precio = auxTope->getPrecio();
            totalZonaPreferencial += precio;
            auxTope = auxTope ->getSiguiente();
            bandera--;
        }
    }
    return totalZonaPreferencial;
}

bool PilaAreaPreferencial::estaLlena(void) {

    if (longitud == 10) {
        return true;
    } else {
        return false;
    }

}