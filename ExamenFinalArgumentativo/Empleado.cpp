#include <string>
#include "Empleado.h"
#include <iostream>

Empleado::Empleado(){
    std::string nombreEmp;
    float sueldoEmp;
    Fecha cumpleAniosEmp;
}
Empleado::~Empleado(){
}
std::string Empleado::getNombreEmp(){
    return nombreEmp;
}
float Empleado::getSueldoEmp(){
    return sueldoEmp;
}
Fecha Empleado::getFecha(){
    return cumpleAniosEmp;
}
void Empleado::setNombreEmp(std::string userNombre){
    nombreEmp = userNombre;
}
void Empleado::setSueldoEmp(float userSueldo){
    sueldoEmp = userSueldo;
}
void Empleado::setFecha(Fecha userFecha){
    cumpleAniosEmp = userFecha;
}
void Empleado::subeSueldo(float userPorcentaje){
    if (userPorcentaje <= 10 && userPorcentaje >= 1){
        float porcentajeVerdadero = (userPorcentaje/100)+1;
        float nuevosueldoEmp = porcentajeVerdadero*sueldoEmp;
        std::cout<<"Tu sueldo viejo era: "+std::to_string(sueldoEmp)+". Tu nuevo sueldo es: "+std::to_string(nuevosueldoEmp)+"."<<std::endl;
        sueldoEmp = nuevosueldoEmp;
    } else {
        std::cout<<"Porcentaje invalido, no hay incremento salarial. Tiene que ser entre 1% y 10%."<<std::endl;
    }
}