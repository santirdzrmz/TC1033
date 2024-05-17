#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Airline.h"

Airline::Airline(std::string user_boardingCity, std::string user_name, std::string user_shortName,
    float user_incomes, std::vector<Flight> user_flights){
    boardingCity = user_boardingCity;
    name = user_name;
    shortName = user_shortName;
    incomes = user_incomes;
    flights = user_flights;
    NUM_FLIGHTS = 5;
}
std::string Airline::getBoardingCity(){
    return boardingCity;
}
std::string Airline::getName(){
    return name;
}
std::string Airline::getShortName(){
    return shortName;
}
float Airline::getIncomes(){
    return incomes;
}
void Airline::setBoardingCity(std::string user_boardingCity){
    boardingCity = user_boardingCity;
}
void Airline::setName(std::string user_name){
    name = user_name;
}
void Airline::setShortName(std::string user_shortName){
    shortName = user_shortName;
}
void Airline::setIncomes(float user_incomes){
    incomes = user_incomes;
}
void Airline::updateAirlane(){
    std::cout<<"Ingresa el shortname de tu aerolinea: "<<std::endl;
    std::string input;
    std::cin>> input;
    shortName = input;
    std::cout<<"Ingresa el nombre de tu aerolinea: "<<std::endl;
    std::string input2;
    std::cin>> input2;
    name = input2;
}
void Airline::scheduleFlight(){
    if (flights.size() > NUM_FLIGHTS){
        std::cout<<"Vuelos de la línea aérea "+name+ " saturados, imposible programar."<<std::endl;
    }
    else{
        std::cout<<"Ingresa el shortname de tu aerolinea: "<<std::endl;
        std::string user_shortName;
        std::cin>>user_shortName;
        std::cout<<"Ingresa el modelo de tu avión: "<<std::endl;
        std::string user_model;
        std::cin>>user_model;
        std::cout<<"Ingresa el destino de tu avión: "<<std::endl;
        std::string userFromTo;
        std::cin>>userFromTo;
        std::cout<<"Ingresa la distancia de recorrido de tu avión: "<<std::endl;
        int user_distance;
        std::cin>>user_distance;
        std::cout<<"Ingresa el nombre de tu tripulación: "<<std::endl;
        std::string user_crew;
        std::cin>>user_crew;
        std::cout<<"Ingresa la hora de tu vuelo: "<<std::endl;
        int user_hour;
        std::cin>>user_hour;
        std::cout<<"Ingresa el precio de tu boleto: "<<std::endl;
        float user_price;
        std::cin>>user_price;
        std::vector<Passenger> user_seats (119);
        bool check = true;
        int i = 0;
        while(check){
            std::cout<<"Que asiento quieres?: "<<std::endl;
            std::string matriz_asientos = " 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 || 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30\n"
                                  "31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 || 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60\n"
                                  "61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 || 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90\n"
                                  "91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 || 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120";
            std::cout<<matriz_asientos<<std::endl;
            int asiento;
            std::cin>> asiento;
            Passenger newPassenger;
            newPassenger.setNumber(asiento);
            int j=0;
            while (j <= i){
                if (newPassenger.getNumber() == asiento){
                    std::cout<<"Ese asiento ya esta tomado"<<std::endl;
                    check = false;
                }
                j++;
            }   
            user_seats[i] = newPassenger;
            std::cout<<"Quieres agregar más pasajeros? Ingresa 1 si si y 0 si no"<<std::endl;
            int answer;
            std::cin>> answer;
            if (answer == 0){
                check = false;
            }
            i++;
            
        }
        Flight newFlight = Flight("Today", user_hour, user_price, user_model, user_distance, userFromTo, 
        user_crew, 0, user_seats);
        int user_fuel = newFlight.calculateFuel(user_distance);
        newFlight.setFuel(user_fuel);

    }
    
}
void Airline::closeOperation(){

}
void Airline::currentIncome(){

}