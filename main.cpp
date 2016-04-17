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
#include "Cola.h"
#include "PilaAreaPreferencial.h"

using namespace std;

ListaLocalidadGeneral listaGeneral;
Cola colaEsperaGeneral;
int obtenerOpcion(void);
bool ejecutar(int);
void mostrarVIP();
void liberarReservacionesVIP();
void ComprarEntradaVIP();

int filaSelected;
int columnaSelected;
string filas [6] = {"0", "1", "2", "3", "4", "5"};
string columnas[2] = {"1", "2"};
string vip [6][2] = {
    {"0", "0"},
    {"0", "0"},
    {"0", "0"},
    {"0", "0"},
    {"0", "0"},
    {"0", "0"}
};


//*********Inicia Area preferencial*********
PilaAreaPreferencial areaPreferencial1 = PilaAreaPreferencial();
PilaAreaPreferencial areaPreferencial2 = PilaAreaPreferencial();
PilaAreaPreferencial areaPreferencial3 = PilaAreaPreferencial();
PilaAreaPreferencial areaPreferencial4 = PilaAreaPreferencial();
PilaAreaPreferencial areaPreferencial5 = PilaAreaPreferencial();
int precioPreferencial = 5500;
//*********Finaliza Area preferencial*********
//Metodo de mostrar reservas area preferencial

/*Este metodo despliega las areas preferenciales disponibles*/
static void reservasAreaPreferencial(void) {
    cout << "Preferencial" << endl;
    cout << "1: Area Preferencial A" << endl;
    cout << "2: Area Preferencial B" << endl;
    cout << "3: Area Preferencial C" << endl;
    cout << "4: Area Preferencial D" << endl;
    cout << "5: Area Preferencial E" << endl;
    cout << "Seleccione el area que desea reservar" << endl;
}

//*********IniciaCola espera Area preferencial*********
Cola colaEsperaAreaPreferencial = Cola();

/*Este metodo ingresa a la cola de espera las entradas que no se pudieron reservar*/

static void colaEsperaAPreferencial(int cantEntradas) {
    NodoCola *colaEspera;
    for (int i = 0; i < cantEntradas; i++) {
        colaEspera = new NodoCola(precioPreferencial, 1);
        colaEsperaAreaPreferencial.insertarElemento(colaEspera);
    }
    cout << "Se han agregado " << cantEntradas << " a la cola de espera en Area preferencial" << endl;
    cout << "La cola de area preferencial" << endl;
    colaEsperaAreaPreferencial.mostrarCola();
}
//*********Finaliza Cola espera Area preferencial*********

/*Este metodo realizar las reservas, recibiendo por parametro el numero de area  y la cantidad de entradas*/

static void numAreaPreferencial(int numArea, int cantEntradas) {
    bool reserva;

    switch (numArea) {
        case 1:
            if (areaPreferencial1.getLongitud() < cantEntradas) {
                cout << "No hay suficiente espacio para reservar" << endl;
                cout << "¿Desea ir a la cola de espera?\n1:Si\n2:No" << endl;
                int colaEspera;
                cin >>colaEspera;
                if (colaEspera == 1) {
                    colaEsperaAPreferencial(cantEntradas);
                } else {
                    cout << "Vuelva pronto" << endl;
                }
            } else {
                numArea = 1;
                for (int i = 0; i < cantEntradas; i++) {
                    reserva = areaPreferencial1.insertar(true, precioPreferencial, "Reservado");
                }
            }

            break;
        case 2:
            if (areaPreferencial2.getLongitud() < cantEntradas) {
                cout << "No hay suficiente espacio para reservar" << endl;
                cout << "¿Desea ir a la cola de espera?\n1:Si\n2:No" << endl;
                int colaEspera;
                cin >>colaEspera;
                if (colaEspera == 1) {
                    colaEsperaAPreferencial(cantEntradas);
                } else {
                    cout << "Vuelva pronto" << endl;
                }
            } else {
                numArea = 2;
                for (int i = 0; i < cantEntradas; i++) {
                    reserva = areaPreferencial2.insertar(true, precioPreferencial, "Reservado");
                }
            }
            break;
        case 3:
            if (areaPreferencial3.getLongitud() < cantEntradas) {
                cout << "No hay suficiente espacio para reservar" << endl;
                cout << "¿Desea ir a la cola de espera?\n1:Si\n2:No" << endl;
                int colaEspera;
                cin >>colaEspera;
                if (colaEspera == 1) {
                    colaEsperaAPreferencial(cantEntradas);
                } else {
                    cout << "Vuelva pronto" << endl;
                }
            } else {
                numArea = 3;
                for (int i = 0; i < cantEntradas; i++) {
                    reserva = areaPreferencial3.insertar(true, precioPreferencial, "Reservado");
                }
            }
            break;
        case 4:
            if (areaPreferencial4.getLongitud() < cantEntradas) {
                cout << "No hay suficiente espacio para reservar" << endl;
                cout << "¿Desea ir a la cola de espera?\n1:Si\n2:No" << endl;
                int colaEspera;
                cin >>colaEspera;
                if (colaEspera == 1) {
                    colaEsperaAPreferencial(cantEntradas);
                } else {
                    cout << "Vuelva pronto" << endl;
                }
            } else {
                numArea = 4;
                for (int i = 0; i < cantEntradas; i++) {
                    reserva = areaPreferencial4.insertar(true, precioPreferencial, "Reservado");
                }
            }
            break;
        case 5:
            if (areaPreferencial5.getLongitud() < cantEntradas) {
                cout << "No hay suficiente espacio para reservar" << endl;
                cout << "¿Desea ir a la cola de espera?\n1:Si\n2:No" << endl;
                int colaEspera;
                cin >>colaEspera;
                if (colaEspera == 1) {
                    colaEsperaAPreferencial(cantEntradas);
                } else {
                    cout << "Vuelva pronto" << endl;
                }
            } else {
                numArea = 5;
                for (int i = 0; i < cantEntradas; i++) {
                    reserva = areaPreferencial5.insertar(true, precioPreferencial, "Reservado");
                }
            }
            break;
    }
    if (reserva == true) {
        cout << "La reserva en el area " << numArea << " fue exitosa" << endl;
    } else {
        cout << "La reserva en el area " << numArea << "  no se pudo realizar" << endl;
    }

}

int main(int argc, char** argv) {


    /*
     * Pasos 
     * 1- Click derecho git : Commit
     * 2- Click derecho git : Add
     * 3- Click derecho git : Remote - Push
     * *** Pull sirve para actualizar el repositorio, baja cambios.
     * Cambios
     */




    int opcion;
    string resul;
    bool salir = false;
    string menu[12] = {

        "1.Reservar VIP ",
        "2.Reservar Preferencial ",
        "3.Reservar General",
        "4.Pagar entradas reservadas VIP",
        "5.Pagar entradas reservadas Preferencial",
        "6.Pagar entradas reservadas General",
        "7.Liberar reservaciones",
        "8.Iniciar la función",
        "9.Informacion reservas localidad General",
        "10.Informacion cola espera localidad General",
        "11.Comprar boleto General",
        "12.Salir"
    };



    do {
        for (int i = 0; i < 11; i++) {

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

    //Variables
    bool reserva;
    int cantReservas;
    bool reservaExitosa;

    switch (opcion) {

        case 1:
            cout << "VIP" << endl;
            mostrarVIP();

            break;
        case 2:
            reservasAreaPreferencial();
            int posAreaPreferencial;
            cin >> posAreaPreferencial;
            int numArea;
            cout << "Ingrese la cantidad de entradas a reservar" << endl;
            int cantEntradas;
            cin >> cantEntradas;
            numAreaPreferencial(posAreaPreferencial, cantEntradas);
            break;
        case 3:
            cout << " << Bienvenido localidad General >>" << endl;
            cantReservas;
            reservaExitosa;
            int colaEspera;
            cout << "Ingrese cuantos espacios desea reservar?" << endl;
            cin>>cantReservas;
            for (int i = 0; i < cantReservas; i++) {
                reservaExitosa = listaGeneral.reservarEspacio();
                if (reservaExitosa == true) {
                    cout << i + 1 << "°" << "Reserva " << " realizada exitosamente" << endl;
                } else {
                    cout << "La reserva " << i + 1 << " no se pudo realizar desea ingresar en lista de espera?  1.Si 2.No " << endl;
                    cout << " " << endl;
                    cin>> colaEspera;
                    if (colaEspera == 1) {
                        NodoCola* nodoCola = new NodoCola(5000.00, 3);
                        colaEsperaGeneral.insertarElemento(nodoCola);
                        cout << "en cola de espera" << endl;
                        cout << " " << endl;
                    }
                }
            }
            cout << " " << endl;

            break;
        case 4:
            ComprarEntradaVIP();
            //liberarReservacionesVIP();
            break;

        case 5:
            listaGeneral.mostrarLista();

            break;
        case 6:
            //Pagar entradas area general
            if (listaGeneral.getLongitud() == 0) {
                cout << "No  existe ninguna reservacion" << endl;
                cout << "" << endl;
            } else {
                double totalPagar;
                int pagar;
                cout << "Ingrese cuantas reservas desea pagar?" << endl;
                cin>>cantReservas;
                totalPagar = listaGeneral.obtenerMonto(cantReservas);
                cout << "El monto a pagar es de : " << totalPagar << endl;
                cout << "Desea efectuar el pago? 1.Si 2.No " << endl;
                cin >> pagar;
                if (pagar == 1) {
                    listaGeneral.pagarReservas(cantReservas);
                    cout << "Pago efectuado, Gracias ..." << endl;
                } else {
                    cout << "No se efectuo ningun pago " << endl;
                }
            }
            break;
        case 7:
            //Liberar reservaciones 
            listaGeneral.liberarReservaciones();
            liberarReservacionesVIP();
            break;
        case 8:
            //iniciar funcion
            listaGeneral.iniciarFuncion(&colaEsperaGeneral);
            break;
        case 9:
            //Informacion reservas localidad General",
            cout << "INFORMACION RESERVAS " << endl;
            listaGeneral.mostrarLista();
            break;
        case 10:
            //Informacion cola espera localidad General
            if (colaEsperaGeneral.getLongitud() == 0) {
                cout << " No tenemos solicitudes de espera  " << endl;
            } else {
                colaEsperaGeneral.mostrarCola();
                cout << "" << endl;
            }
            break;


        case 11:
            cout << " << Bienvenido localidad General >>" << endl;
            cout << "Ingrese cuantos espacios desea reservar?" << endl;
            cin>>cantReservas;
            for (int i = 0; i < cantReservas; i++) {
                reservaExitosa = listaGeneral.comprarBoleto();
                if (reservaExitosa == true) {
                    cout << "La compra " << i + 1 << " se ha realizado exitosamente " << endl;
                } else {
                    cout << "La compra " << i + 1 << " no se pudo realizar no hay espacios disponibles " << endl;
                    cout << " " << endl;

                }
            }
            break;
        case 12:
            cout << "<< Ha salido del sistema >>" << endl;
            salir = true;
            break;

        default:
            salir = true;
            break;




            return salir;

    }
}

void mostrarVIP() {



    for (int i = 0; i < 6; i++) {

        vip[0][0] = filas[i];
        cout << vip[0][0];

        for (int j = 0; j < 2; j++) {
            vip[0][j] = columnas[j];

            cout << "|" << vip[i][j];
        }

        cout << "|" << endl;

    }


    cout << "Ingrese la fila de la posicion que desea reservar" << endl;
    cin >>filaSelected;
    cout << "Ingrese la columna de la posicion que desea reservar" << endl;
    cin >>columnaSelected;


    if (filaSelected > 5 || columnaSelected > 2 || filaSelected < 0 || columnaSelected < 0) {

        cout << "Posicion invalida " << endl;


    } else {
        if (vip[filaSelected][columnaSelected - 1] != "0") {
            cout << "Posicion no disponible " << endl;

        } else {
            vip[filaSelected][columnaSelected - 1] = "R";
        }
    }



}

void liberarReservacionesVIP() {

    for (int i = 0; i < 6; i++) {

        for (int j = 0; j < 2; j++) {

            if (vip[i][j] == "R") {
                vip[i][j] = "0";
            }


        }



    }
}

void ComprarEntradaVIP() {


    for (int i = 0; i < 6; i++) {

        vip[0][0] = filas[i];
        cout << vip[0][0];

        for (int j = 0; j < 2; j++) {
            vip[0][j] = columnas[j];

            cout << "|" << vip[i][j];
        }

        cout << "|" << endl;

    }

   

    cout << "Ingrese la fila de la posicion que desea comprar" << endl;
    cin >>filaSelected;
    cout << "Ingrese la columna de la posicion que desea comprar" << endl;
    cin >>columnaSelected;


    if (filaSelected > 5 || columnaSelected > 2 || filaSelected < 0 || columnaSelected < 0) {

        cout << "Posicion invalida " << endl;


    } else {
        if (vip[filaSelected][columnaSelected - 1] == "0"||vip[filaSelected][columnaSelected - 1] == "R") {
             vip[filaSelected][columnaSelected - 1] = "C";
            

        } else if(vip[filaSelected][columnaSelected - 1] == "C"){
           cout << "Posicion no disponible " << endl;
        }
    }


}
