#include <iostream>
#include "MotorVehicle.h"

using namespace std;
MotorVehicle::MotorVehicle(string m,string com,int anio,string col,int cap)
{
    make=m;
    TipoCombustible=com;
    anioManufactura=anio;
    color=col;
    capacidadMotor=cap;
}
void MotorVehicle::setMake(string m)
{
    this->make=m;
}
void MotorVehicle::setTipoCombustible(string com)
{
    TipoCombustible=com;
}
void MotorVehicle::setAnioManufactura(int anio)
{
    anioManufactura=anio;
}
void MotorVehicle::setColor(string col)
{
    color=col;
}
void MotorVehicle::setCapacidadMotor(int cap)
{
    capacidadMotor=cap;
}
string MotorVehicle::getMake()
{
    return make;
}
string MotorVehicle::getTipoCombustible()
{
    return TipoCombustible;
}
int MotorVehicle::getAnioManufactura()
{
    return anioManufactura;
}
string MotorVehicle::getColor()
{
    return color;
}
int MotorVehicle::getCapacidadMotor()
{
    return capacidadMotor;
}
void MotorVehicle::mostrarDatos()
{
    cout<<"Usado para: "<<getMake()<<endl;
    cout<<"Tipo de combustible: "<<getTipoCombustible()<<endl;
    cout<<"Anio de manufactura: "<<getAnioManufactura()<<endl;
    cout<<"Color: "<<getColor()<<endl;
    cout<<"Capacidad del motor: "<<getCapacidadMotor()<<endl;
}

bool MotorVehicle::operator==(const MotorVehicle &o)
{
    return this->make==o.make && this->TipoCombustible==o.TipoCombustible && this->anioManufactura==o.anioManufactura && this->color==o.color && this->capacidadMotor==o.capacidadMotor;
}

bool MotorVehicle::operator!=(const MotorVehicle &o)
{
    return !(this->make==o.make && this->TipoCombustible==o.TipoCombustible && this->anioManufactura==o.anioManufactura && this->color==o.color && this->capacidadMotor==o.capacidadMotor);
}

bool MotorVehicle::operator>(const MotorVehicle &o)
{
    return anioManufactura>o.anioManufactura;
}

ostream& operator<<(ostream &output, const MotorVehicle &o) {
    output << "\nUsado para: " << o.make <<
              "\nTipo de combustible: "<<o.TipoCombustible <<
              "\nAnio de manufacturacion: "<< o.anioManufactura<<
              "\nColor: "<<o.color<<
              "\nCapacidad del motor: "<<o.capacidadMotor;
    return output;
}
