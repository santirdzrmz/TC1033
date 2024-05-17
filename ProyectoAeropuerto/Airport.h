#include <iostream>
#include <string>
#include "Airline.h"
class Airport {
    public:
    Airport();
    Airport(std::string user_date);
    void startOperations(std::string user_date);
    void printAllFlights();
    void printFlightSchedule();
    std::string getDate();
    std::string getCity();
    std::string getCountry();
    int getID();
    void setDate(std::string user_date);
    void setID(int user_id);
    void setCity(std::string user_city);
    void setCountry(std::string user_country);
    private:
    int id;
    int NUMAIRLINES;
    std::string date;
    std::string city;
    std::string country;
    float totalDailyIncome;
    int totalDailyTransactions;
    std::vector<Airline> airlines;

};