#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H
#include <iostream>
using namespace std;

class MotorVehicle
{
    private:
        string make;
        string TipoCombustible;
        int anioManufactura;
        string color;
        int capacidadMotor;
    public:
        MotorVehicle(string,string,int,string,int);
        void setMake(string);
        void setTipoCombustible(string);
        void setAnioManufactura(int);
        void setColor(string);
        void setCapacidadMotor(int);
        string getMake();
        string getTipoCombustible();
        int getAnioManufactura();
        string getColor();
        int getCapacidadMotor();
        void mostrarDatos();
        bool operator==(const MotorVehicle &);
        bool operator!=(const MotorVehicle &);
        bool operator>(const MotorVehicle &);
        friend ostream& operator<<(ostream &output, const MotorVehicle &o);
};






#endif // MOTORVEHICLE_H
