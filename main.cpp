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
#include "ListaLocalidadGeneral.h"

using namespace std;

ListaLocalidadGeneral listaGeneral;
int obtenerOpcion(void);
bool ejecutar(int);
void mostrarVIP();

int main(int argc, char** argv) {


    /*
     * Pasos 
     * 1- Click derecho git : Commit
     * 2- Click derecho git : Add
     * 3- Click derecho git : Remote - Push
     * *** Pull sirve para actualizar el repositorio, baja cambios.
     */




    int opcion;
    string resul;
    bool salir = false;
    string menu[8] = {

        "1.Reservar VIP ",
        "2.Reservar Preferencial ",
        "3.Reservar General",
        "4.Pagar entradas reservadas",
        "5.Pagar entradas",
        "6.Liberar reservaciones",
        "7.Iniciar la función",
        "8.Salir"
    };



    do {
        for (int i = 0; i < 8; i++) {

            cout << menu[i] << endl;
        }
        opcion = obtenerOpcion();
        salir = ejecutar(opcion);
    } while (salir == false);

    return 0;
}

int obtenerOpcion() {
    int opc;
    cout << "Seleccione la opcion" << endl;
    cin >> opc;

    return opc;
}

bool ejecutar(int opcion) {
    bool salir;
    switch (opcion) {

        case 1:
            cout << "VIP" << endl;
            mostrarVIP();
            break;
        case 2:
            cout << "Preferencial" << endl;
            break;
        case 3:
            cout << " << Bienvenido localidad General >>" << endl;
            int cantReservas;
            bool reservaExitosa;
            int colaEspera;
            cout << "Ingrese cuantos espacios desea reservar?" << endl;
            cin>>cantReservas;
            for (int i = 0; i < cantReservas; i++) {
                reservaExitosa = listaGeneral.reservarEspacio();

                if (reservaExitosa == true) {
                    cout << "Reserva " << i + 1 << " realizada exitosamente" << endl;
                    listaGeneral.mostrarLista();
                } else {
                    cout << "La reserva " << i + 1 << " no se pudo realizar desea ingresar en lista de espera?  1.Si 2.No " << endl;
                    cout << " " << endl;
                    cin>> colaEspera;
                    if (colaEspera == 1) {
                        //hacer cola de espera
                        cout << "en cola de espera" << endl;
                        cout << " " << endl;
                    }
                }
            }
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:
            cout << "<< Ha salido del sistema >>" << endl;
            salir = true;
            break;

        default:
            break;


    }
    return salir;
}

void mostrarVIP() {

    int filas [6] = {0, 1, 2, 3, 4, 5};
    int columnas[2] = {1, 2};
    int vip [6][2] = {
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0}
    };

    for (int i = 0; i < 6; i++) {

        vip[0][0] = filas[i];
        cout << vip[0][0];

        for (int j = 0; j < 2; j++) {
            vip[0][j] = columnas[j];

            cout << "|" << vip[i][j];
        }

        cout << "|" << endl;

    }

    int filaSelected;
    int columnaSelected;

    cout << "Ingrese la fila de la posicion que desea reservar" << endl;
    cin >>filaSelected;
    cout << "Ingrese la columna de la posicion que desea reservar" << endl;
    cin >>columnaSelected;

}