/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Maureen
 *
 * Created on 2 de abril de 2016, 05:18 PM
 */

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

int obtenerOpcion(void);
bool ejecutar(int);

int main(int argc, char** argv) {


    /*
     * Pasos 
     * 1- Click derecho git : Commit
     * 2- Click derecho git : Add
     * 3- Click derecho git : Remote - Push
     * *** Pull sirve para actualizar el repositorio, baja cambios.
     */

    //PRUEBA MOSTRAR MATRIZ
    //    int vip [5][2] = {
    //        {0, 0},
    //        {1, 1},
    //        {2, 2},
    //        {3, 3},
    //        {4, 4}};
    //
    //    for (int i = 0; i < 5; i++) {
    //        for (int j = 0; j < 2; j++) {
    //            cout << "|" << vip[i][j];
    //        }
    //            cout << "|" << endl;
    //    }


    int opcion;
    string resul;
    bool salir = false;
    string menu[4] = {

        "1.Reservar VIP ",
        "2.Reservar Preferencial ",
        "3.Reservar General",
        "4.Salir"
    };



    do {
        for (int i = 0; i < 5; i++) {

            cout << menu[i] << endl;
        }
        opcion = obtenerOpcion();
        salir = ejecutar(opcion);
    } while (salir == false);

    return 0;
}

int obtenerOpcion() {
    int opc;
    cout << "Seleccione la opcion";
    cin >> opc;

    return opc;
}

bool ejecutar(int opcion) {
    bool salir;
    switch (opcion) {

        case 1:
            cout << "VIP" << endl;
            break;
        case 2:
            cout << "Preferencial" << endl;
            break;
        case 3:
            cout << "general" << endl;
            break;
        case 4:
            cout << "adios" << endl;
            salir = true;
            break;

        default:
            break;


    }
    return salir;
}


