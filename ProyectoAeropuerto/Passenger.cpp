#include "Passenger.h"
#include <iostream>

Passenger::Passenger(){
    number = 0;
    name = "Null";
}

std::string Passenger::getName(){
    return name;
}
int Passenger::getNumber(){
    return number;
}

void Passenger::setUserInfo(int user_number, std::string user_name){
    number = user_number;
    name = user_name;
}
void Passenger::setName(std::string user_name){
    name = user_name;
}
void Passenger::setNumber(int user_number){
    number = user_number;
}