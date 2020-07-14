#ifndef CONTADOR_H
#define CONTADOR_H
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Contador : public Empleado
{
private:
    int cuentas;
public:
    Contador(string nom,string ap,int s,int m,int c): Empleado(nom,ap,s,m),cuentas(c){}
    int getCuenta()
    {
        return cuentas;
    }

    const string obtenerInformacion() const {
        ostringstream output;
        output  << "Nombre: "<<nombre<<" "<<"Apellido: "<<apellido<<" Sueldo: "<<sueldo<<" Numero de cuenta: "<<cuentas;
        return output.str();
    }


};

#endif // EMPLEADO_H
