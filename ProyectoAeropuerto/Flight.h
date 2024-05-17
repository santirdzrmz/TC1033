#include <iostream>
#include <string>
#include "Passenger.h"
#include <vector>
class Flight {
    public:
    Flight(std::string user_date, int user_hour, float user_price, std::string user_model, int distance, std::string userFromTo, 
    std::string user_crew, int user_fuel, std::vector<Passenger> user_seats);
    int getHour();
    std::string getDate();
    float getPrice();
    std::string getAirplaneModel();
    std::string getFromTo();
    std::string getCrew();
    int getDistance();
    int getFuel();
    void setDistance(int user_distance);
    void setHour(int user_hour);
    void setDate(std::string user_date);
    void setPrice(float user_price);
    void setAirplaneModel(std::string user_model);
    void setFromTo(std::string userFromTo);
    void setCrew(std::string user_crew);
    void setFuel(int user_fuel);
    int calculateFuel(int user_distance);
    private:
    int SIZE;
    std::string date;
    int hour;
    int distance;
    float price;
    std::string airplaneModel;
    std::string fromTo;
    std::string crew;
    int fuel;
    std::vector<Passenger> seats;

};