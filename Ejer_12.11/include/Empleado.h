#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Date.h"
using namespace std;

class Empleado
{
protected:
    string nombre;
    string apellido;
    int sueldo;
    int mes;
public:
    Empleado(string nom,string ap,int s,int m): nombre(nom),apellido(ap),sueldo(s),mes(m){}

    void setMes(int m)
    {
        mes=m;
        if(mes==10)//Suponiendo que los empleados cumplan anios en octubre
        {
            sueldo+=100;
        }
    }
    string getNombre()
    {
        return nombre;
    }
    string getApellido()
    {
        return apellido;
    }
    int getSueldo()
    {
        return sueldo;
    }
    int getMes()
    {
        return mes;
    }
    virtual const string obtenerInformacion() const {
        ostringstream output;
        output << "Nombre: "<<nombre<<" "<<"Apellido: "<<apellido<<" Sueldo: "<<sueldo;
        return output.str();
    }


};

#endif // EMPLEADO_H
