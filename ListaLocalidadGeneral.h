/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaLocalidadGeneral.h
 * Author: Maureen
 *
 * Created on 6 de abril de 2016, 08:38 PM
 */

#ifndef LISTALOCALIDADGENERAL_H
#define LISTALOCALIDADGENERAL_H
#include "NodoListaSimple.h"
#include "Cola.h"
class ListaLocalidadGeneral {
public:
    ListaLocalidadGeneral();
    ListaLocalidadGeneral(const ListaLocalidadGeneral& orig);
    virtual ~ListaLocalidadGeneral();
    int getLongitud(void);
    NodoListaSimple* getCabeza(void);
    void setLongitud(int);
    void setCabeza(NodoListaSimple*);
    bool reservarEspacio();
    bool esVacia(void);
    void mostrarLista();
    void pagarReservas(int);
    double obtenerMonto(int);
    void liberarReservaciones(void);
    void iniciarFuncion(Cola*);
    

private:
    int longitud;
    NodoListaSimple* cabeza;


};

#endif /* LISTALOCALIDADGENERAL_H */

