#include "Flight.h"
#include <iostream>
#include <string>
#include <vector>
class Airline{
    public:
    Airline(std::string user_boardingCity, std::string user_name, std::string user_shortName,
    float user_incomes, std::vector<Flight> user_flights);
    std::string getBoardingCity();
    std::string getName();
    std::string getShortName();
    float getIncomes();
    void setBoardingCity(std::string user_boardingCity);
    void setName(std::string user_name);
    void setShortName(std::string user_shortName);
    void setIncomes(float user_incomes);
    void updateAirlane();
    void scheduleFlight();
    void closeOperation();
    void currentIncome();
    private:
    std::string boardingCity;
    std::string name;
    std::string shortName;
    float incomes;
    std::vector<Flight> flights;
    int NUM_FLIGHTS;
};