#ifndef CONSERJE_H
#define CONSERJE_H
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Conserje : public Empleado
{
private:
    string lugar;
public:
    Conserje(string nom,string ap,int s,int m,string l): Empleado(nom,ap,s,m),lugar(l){}
    string getLugar()
    {
        return lugar;
    }

    const string obtenerInformacion() const {
        ostringstream output;
        output << "Nombre: "<<nombre<<" "<<"Apellido: "<<apellido<<" Sueldo: "<<sueldo<<" Lugar de limpieza: "<<lugar;
        return output.str();
    }


};

#endif // EMPLEADO_H
