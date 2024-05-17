#include <iostream>
#include "Alumno.h"
Alumno::Alumno(){
    matricula="330839";
    nombre="Monica";
    carrera="ISC";
    nacimiento.setFecha(1,1,2000);
}
Alumno::~Alumno(){
//destructor
}
void Alumno::printAlumno(){
    cout<<"Matricula: "<<matricula<<" Nombre: "<<nombre<<" Carrera: "<<carrera<<endl;
    nacimiento.getFecha();
}

int main(){
    Alumno monica;
    monica.printAlumno();

    return 0;
}
