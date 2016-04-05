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

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {


    /*
     * Pasos 
     * 1- Click derecho git : Commit
     * 2- Click derecho git : Add
     * 3- Click derecho git : Remote - Push
     * *** Pull sirve para actualizar el repositorio, baja cambios.
     */

    //PRUEBA MOSTRAR MATRIZ
    int vip [5][2] = {
        {0, 0},
        {1, 1},
        {2, 2},
        {3, 3},
        {4, 4}};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "|" << vip[i][j];
        }
            cout << "|" << endl;
    }


    return 0;
}


