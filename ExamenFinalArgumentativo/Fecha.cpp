#include "Fecha.h"
Fecha::Fecha(){
int dia;
int mes;
}
Fecha::~Fecha(){

}
void Fecha::setDia(int userDia){
    dia = userDia;
}
int Fecha::getDia(){
    return dia;
}
void Fecha::setMes(int userMes){
    mes = userMes;
}
int Fecha::getMes(){
    return mes;
}