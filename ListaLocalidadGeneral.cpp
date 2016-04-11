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
#include "NodoListaSimple.h"

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
        NodoListaSimple* nuevo = new NodoListaSimple(false,true);

        if (getCabeza() == NULL) {
            setCabeza(nuevo);
        } else {

            NodoListaSimple* aux = getCabeza();

            while (aux->getSiguiente() != NULL) {
                aux = aux->getSiguiente();
            }
            nuevo->setSiguiente(aux->getSiguiente());
            nuevo->setAnterior(aux);
            aux->setSiguiente(nuevo);
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
            cout << "Posicion: " << i + 1 << endl;
            cout << "Precio: " << aux->getPrecio() << endl;
            if (aux->getEstado() == true) {
                cout << "Estado: Reservado" << endl;
            } else {
                cout << "Estado: Cancelado" << endl;

            }
            if (aux->getPagado() == false) {
                cout << "Pendiente de pago" << endl;
            } else {
                cout << "Sin cargos pendientes" << endl;
            }
            cout << " " << endl;
            i++;
            aux = aux->getSiguiente();
        }
        cout << "" << endl;
        cout << "Numero espacios disponibles: " << 50 - getLongitud() << endl;
        cout << " " << endl;

    } else {
        cout << "La lista se encuentra vacia." << endl;
    }

}

double ListaLocalidadGeneral::obtenerMonto(int cantReservasPorPagar) {
    NodoListaSimple* aux = getCabeza();
    double total = aux->getPrecio() * cantReservasPorPagar;
    return total;

}

void ListaLocalidadGeneral::pagarReservas(int cantReservasPorPagar) {

    NodoListaSimple* aux = getCabeza();


    for (int i = 0; i < cantReservasPorPagar; i++) {

        if (!esVacia()) {
            if (aux != NULL) {

                if (aux->getPagado() == true) {
                    aux = aux->getSiguiente();
                    cantReservasPorPagar = cantReservasPorPagar + 1;
                } else {
                    aux->setEstado(false);
                    aux->setPagado(true);
                    aux = aux->getSiguiente();

                }
            }
        } else {
            cout << "No hay reservas" << endl;
        }

    }

}

void ListaLocalidadGeneral::liberarReservaciones(void) {

    int longi = getLongitud();
    NodoListaSimple * aux = getCabeza();

    for (int i = 0; i < longi; i++) {

        if (aux->getPagado() == true) {
            aux = aux->getSiguiente();

        } else {

            if (aux->getAnterior() == NULL) {

                aux->getSiguiente()->setAnterior(NULL);
                aux = aux->getSiguiente();
                setCabeza(aux);

            } else {


                if (aux->getSiguiente() != NULL) {
                    aux->getAnterior()->setSiguiente(aux->getSiguiente());
                    aux->getSiguiente()->setAnterior(aux->getAnterior());
                } else {
                    aux->getAnterior()->setSiguiente(aux->getSiguiente());
                }


            }
            delete aux;
            longitud--;
            if (aux->getSiguiente() != NULL) {
                aux = aux->getSiguiente();
            }


        }

    }

}

void ListaLocalidadGeneral::iniciarFuncion(Cola* objCola) {
    liberarReservaciones();
    
    int longLista = getLongitud();
    int disponibles = 50 - longLista;
    int longCola = objCola->getLongitud();
    NodoListaSimple * aux = getCabeza();
    NodoCola* auxCola = objCola->getFrente();
    int iteraciones;
    
    if(disponibles >longCola){
        iteraciones = longCola; 
    }else{
     iteraciones = disponibles;
    }
    
    
    if(disponibles == longCola){
      iteraciones = disponibles;
    }
    for(int i=0;i<iteraciones;i++){   
            comprarBoleto();
            objCola->eliminarElemento();
    }    
    obtenerRecaudacionLocalidadGeneral();

}

bool ListaLocalidadGeneral::comprarBoleto() {

    if (longitud >= 50) {
        return false;
    } else {
        NodoListaSimple* nuevo =  new NodoListaSimple(true,false);

        if (getCabeza() == NULL) {
            setCabeza(nuevo);
        } else {
            NodoListaSimple* aux = getCabeza();

            while (aux->getSiguiente() != NULL) {
                aux = aux->getSiguiente();
            }
            nuevo->setSiguiente(aux->getSiguiente());
            nuevo->setAnterior(aux);
            aux->setSiguiente(nuevo);
        }
        longitud++;
        return true;
    }
}



void ListaLocalidadGeneral::obtenerRecaudacionLocalidadGeneral(){
   
    cout<<"INFORMACION LOCALIDAD GENERAL "<<endl;
    NodoListaSimple* aux = getCabeza(); 
    double montoRecaudado = 0.0;
    for(int i=0;i<getLongitud();i++){
        montoRecaudado += aux->getPrecio();
    }
    cout<<"Monto total recaudado localidad General  :"<<  montoRecaudado  <<endl;
    cout<<"Cantidad de personas en localidad general : "<<  getLongitud()<<endl;

}