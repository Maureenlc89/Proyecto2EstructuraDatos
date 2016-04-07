/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.h
 * Author: Maureen
 *
 * Created on 6 de abril de 2016, 10:10 PM
 */

#ifndef COLA_H
#define COLA_H
#include "NodoCola.h"
#include <iostream>
using namespace std;
class Cola {
public:
    Cola();
    Cola(const Cola& orig);
    virtual ~Cola();
    int getLongitud(void);
    NodoCola * getFrente(void);
    NodoCola * getFinal(void);
    void setLongitud(int);
    void setFrente(NodoCola*);
    void setFinal(NodoCola*);
    void insertarElemento(NodoCola*);
    void eliminarElemento(void);
private:
    int longitud;
    NodoCola * frente;
    NodoCola * final;


};

#endif /* COLA_H */

