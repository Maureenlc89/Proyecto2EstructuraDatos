/* 
 * File:   PilaAreaPreferencial.h
 * Author: Jose Nunnez
 *
 * Created on 7 de abril de 2016, 03:41 PM
 */


#ifndef PILAAREAPREFERENCIAL_H
#define	PILAAREAPREFERENCIAL_H

#include "NodoPila.h"
#include <string>
using namespace std;
class PilaAreaPreferencial {
public:
    PilaAreaPreferencial();
    virtual ~PilaAreaPreferencial();

    //Metodos accesores
    void setLongitud(void);
    int getLongitud(void);
    void setTope(NodoPila*);
    NodoPila* getTope(void);

    //Métodos del TAD
    bool insertar(bool, double, string); //Se inserta siempre por el tope
    bool eliminar(void); //Se elimina siempre por el tope
    void consultarTope(void); //Consulta al elemento del tope
    bool esVacia(void); //consulta si la pila está vacía

    //Metodos teatro
    bool liberarReservaciones(void); //Pasa todos los estados de ocupados a no ocupados (el bool)
    double iniciarFuncion(void); //Inicia la función y devuelve un total, se multiplica el total de espacios por el precio
    bool reservar(void);
    bool pagar(void);
    bool estaLlena(void);

private:
    int longitud;
    NodoPila* tope;

};

#endif	/* PILAAREAPREFERENCIAL_H */

