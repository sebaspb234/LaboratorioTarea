#include <iostream>
#include <vector>
#include "Empleado.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;

int main()
{
    PieceWorker t1("Jorge","Ugarte",15,20);
    PieceWorker t2("Carlos","Espinal",31,10);
    HourlyWorker t3("Jeff","Baran",39,20);
    HourlyWorker t4("Sandro","Alcantara",14,24);
    vector<Empleado*>vec={&t1,&t2,&t3,&t4};
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]->obtenerInfo();
        cout<<vec[i]->ObtenerSueldo()<<endl;
    }

    return 0;
}
