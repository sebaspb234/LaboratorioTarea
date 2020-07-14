#include <iostream>
#include "HugeInteger.h"
using namespace std;

int main() {
    HugeInteger n1{7654321};
    HugeInteger n2{7891234};
    HugeInteger n3{"99999999999999999999999999999"};
    HugeInteger n4{"1"};
    HugeInteger n5;

        cout << "n1 is " << n1 << "\nn2 is " << n2
            << "\nn3 is " << n3 << "\nn4 is " << n4
            << "\nn5 is " << n5 << "\n\n";
            n5 = n1 + n2;
        cout << n1 << " + " << n2 << " = " << n5 << "\n\n";
        cout << n3 << " + " << n4 << "\n= " << (n3 + n4) << "\n\n";
            n5 = n1 + 9;
        cout << n1 << " + " << 9 << " = " << n5 << "\n\n";
            n5 = n2 + "10000";
        cout << n2 << " + " << "10000" << " = " << n5 << endl;

        cout<<n1*n2<<endl;
//        cout<<n1/n2<<endl;
    if(n1==n2){cout<<"Son iguales"<<endl;}
    else if(n1!=n2){cout<<"Son diferentes"<<endl;}
    cout<<(n1>n2)<<endl;
    cout<<(n1<n2)<<endl;
    cout<<(n1>=n2)<<endl;
    cout<<(n1<=n2)<<endl;


}

/* a) Este programa hace uso de la sobrecarga de operadores para poder operar objetos con objetos,
    strings con objetos y enteros con objetos.
   b) Las limitaciones del codigo son que se necesita de forma obligatoria, tener una sobrecarga de operadores para
      poder realizar las operaciones o no funcionaria el programa.*/




