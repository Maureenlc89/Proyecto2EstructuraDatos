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

class Cola {
public:
    Cola();
    Cola(const Cola& orig);
    virtual ~Cola();
private:
    int longitud;
    NodoCola * frente;
    NodoCola * final;
   

};

#endif /* COLA_H */

