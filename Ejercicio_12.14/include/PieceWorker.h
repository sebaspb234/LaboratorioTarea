#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Empleado.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class PieceWorker:public Empleado
{
    private:
        int pieza;
        int sueldo;
        int st=0;
        int cont=0;
    public:
        PieceWorker(string nom,string ap,int p,int suel):Empleado(nom,ap),pieza(p),sueldo(suel){}
        int getPieza(){return pieza;}
        int getSueldo(){return sueldo;}
        int ObtenerSueldo()
        {
            st=pieza*sueldo;

            return st;
        }
        virtual const string obtenerInfo() const {
            ostringstream output;
            output << "Nombre: "<<nombre << "\tApellido: " << apellido<<"\tSueldo total: ";
            return output.str();
        }

};

#endif // PIECEWORKER_H
