#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main()
{
    MotorVehicle v1("Carreras","Vegetal",2011,"Azul",180);
    MotorVehicle v2("Carreras","Diesel",2009,"Azul",180);
    v1.mostrarDatos();
    cout<<endl;
    v2.mostrarDatos();
    if(v1==v2)
    {
        cout<<"Son iguales"<<endl;
    }
    else if(v1!=v2)
    {
        cout<<"Son diferentes"<<endl;
    }

    if(v1>v2)
    {
        cout<<"v1 es mayor a v2?:  "<<(v1>v2)<<endl;
    }

    cout<<v1<<endl;

    return 0;
}
