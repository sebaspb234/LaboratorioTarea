#include <iostream>
#include "Empleado.h"
#include "Contador.h"
#include "Conserje.h"
#include "Date.h"
#include <string>
#include <vector>
using namespace std;

int main()
{
    int fecha1=10,fecha2=4,fecha3=1;
    Empleado e("Sebastian","Paz",800,fecha1);
    e.setMes(fecha1);
    Contador cont("Rodrigo","Contreras",800,fecha2,113);
    cont.setMes(fecha2);
    Conserje cons("Ivan","Perez",800,fecha3,"Banio");
    cont.setMes(fecha3);


    Empleado *ptr=&e;
    vector<Empleado*> vec{&e,&cont,&cons};
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]->obtenerInformacion()<<endl;
    }


    return 0;
}
