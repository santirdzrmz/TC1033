#include <iostream>
#include <string>
#include <vector>
#include "Flight.h"

Flight::Flight(std::string user_date, int user_hour, float user_price, std::string user_model, int user_distance, std::string userFromTo, 
    std::string user_crew, int user_fuel, std::vector<Passenger> user_seats){
    date = user_date;
    hour = user_hour;
    price = user_price;
    distance = user_distance;
    airplaneModel = user_model;
    fromTo = userFromTo;
    crew = user_crew;
    fuel = user_fuel;
    seats = user_seats;
    SIZE = 120;


}
int Flight::getHour(){
    return hour;
}
std::string Flight::getDate(){
    return date;
}
float Flight::getPrice(){
    return price;
}
int Flight::getDistance(){
    return distance;
}
std::string Flight::getAirplaneModel(){
    return airplaneModel;
}
std::string Flight::getFromTo(){
    return fromTo;
}
std::string Flight::getCrew(){
    return crew;
}
int Flight::getFuel(){
    return fuel;
}
void Flight::setHour(int user_hour){
    hour = user_hour;
}
void Flight::setDate(std::string user_date){
    date = user_date;
}
void Flight::setPrice(float user_price){
    price = user_price;
}
void Flight::setDistance(int user_distance){
    distance = user_distance;
}
void Flight::setAirplaneModel(std::string user_model){
    user_model = airplaneModel;
}
void Flight::setFromTo(std::string userFromTo){
    fromTo = userFromTo;
}
void Flight::setCrew(std::string user_crew){
    crew = user_crew;
}
void Flight::setFuel(int user_fuel){
    fuel = user_fuel;
}
int Flight::calculateFuel(int user_distance){
    int litros=120*user_distance;
    std::cout<<"El combustible requerido para viajar a "+fromTo+" es de: "+std::to_string(litros)+" litros."<<std::endl;
    return litros;
}
    