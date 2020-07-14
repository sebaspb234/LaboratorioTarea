#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include "Empleado.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class HourlyWorker:public Empleado
{
    private:
        int sueldo;
        int st=0;
        int st2=0;
        int hora;
        int horax=0;
        int cont=0;
    public:
        HourlyWorker(string nom,string ap,int h,int suel):Empleado(nom,ap),hora(h),sueldo(suel){}
        int getSueldo(){return sueldo;}
        int getHora(){return hora;}
        int ObtenerSueldo()
        {
            cont=hora-40;
            horax=hora-cont;
            if(cont>0)
            {
                for(int i=hora;i>40;i--)
                {
                    st2+=sueldo*1.5;
                }
                st=(horax*sueldo)+st2;

            }
            else
            {
                st=hora*sueldo;
            }

            return st;
        }
        virtual const string obtenerInfo() const {
            ostringstream output;
            output << "Nombre: "<<nombre << "\tApellido: " << apellido<<"\tSueldo total: ";
            return output.str();
        }

};

#endif // HOURLYWORKER_H
