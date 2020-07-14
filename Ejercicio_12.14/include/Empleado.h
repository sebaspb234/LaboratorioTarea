#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Empleado
{
protected:
    string nombre;
    string apellido;
public:
    Empleado(string nom,string ap):nombre(nom),apellido(ap){}
    string getNombre(){return nombre;}
    string getApellido(){return apellido;}
    virtual int ObtenerSueldo()=0;
    virtual const string obtenerInfo() const {
            ostringstream output;
            output << "Nombre: "<<nombre << "\tApellido" << apellido;
            return output.str();
        }
};

#endif // EMPLEADO_H
