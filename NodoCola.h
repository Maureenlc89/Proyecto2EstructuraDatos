/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCola.h
 * Author: Maureen
 *
 * Created on 6 de abril de 2016, 10:05 PM
 */

#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <iostream>
using namespace std;

class NodoCola {
public:
    NodoCola();
    NodoCola(double ,int );
    NodoCola(const NodoCola& orig);
    virtual ~NodoCola();
    NodoCola * getSiguiente();
    bool getEstado();
    double getPrecio();
    int getLocalidad();
    void  setSiguiente(NodoCola*);
    void setEstado(bool);
    void setPrecio(double);
    void setLocalidad(int);
private:
    NodoCola * siguiente;
    bool estado;
    double precio;
    int localidad;//1.vip, 2.preferencial, 3 general
   
   
};

#endif /* NODOCOLA_H */

