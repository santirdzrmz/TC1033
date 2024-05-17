#include <iostream>
#include <vector>
#include <string>
#include "Empleado.h"

int main(){
    Empleado emp1;
    Empleado emp2;
    emp1.setNombreEmp("Pepe");
    emp2.setNombreEmp("Rocio");
    emp1.setSueldoEmp(10000);
    emp2.setSueldoEmp(12000);
    Fecha pepe;
    Fecha rocio;
    pepe.setDia(19);
    pepe.setMes(9);
    rocio.setDia(28);
    rocio.setMes(2);
    emp1.setFecha(pepe);
    emp2.setFecha(rocio);
    std::cout<<"Empleado 1. Nombre:"+emp1.getNombreEmp()+" Sueldo: "+std::to_string(emp1.getSueldoEmp())+" Cumpleaños: "+std::to_string(emp1.getFecha().getDia())+"/"+std::to_string(emp1.getFecha().getMes())<<std::endl;
    std::cout<<"Empleado 2. Nombre:"+emp2.getNombreEmp()+" Sueldo: "+std::to_string(emp2.getSueldoEmp())+" Cumpleaños: "+std::to_string(emp2.getFecha().getDia())+"/"+std::to_string(emp2.getFecha().getMes())<<std::endl;
    int check = 1;
    while (check == 1){
        std::cout<<"1. Subir Sueldo 2. Salir"<<std::endl;
        int userInput;
        std::cin>> userInput;
        if (userInput == 1){
            std::cout<<"Cual empleado quiere seleccionar? 1 para Empleado 1 y 2 para Empleado 2."<<std::endl;
            int empleado;
            std::cin>>empleado;
            float porcentaje;
            std::cout<<"Coloca el porcentaje a aumentar del 1-10: "<<std::endl;
            std::cin>>porcentaje;
            if (empleado == 1){
                emp1.subeSueldo(porcentaje);
                std::cout<<"Nombre:"+emp1.getNombreEmp()+" Sueldo: "+std::to_string(emp1.getSueldoEmp());
            } else {
                emp2.subeSueldo(porcentaje);
                std::cout<<"Nombre:"+emp2.getNombreEmp()+" Sueldo: "+std::to_string(emp2.getSueldoEmp());
            }

        } else{
            check = 0;
        }
    }
    return 0;

}