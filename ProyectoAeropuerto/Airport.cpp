#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Airport.h"
Airport::Airport(){}
Airport::Airport(std::string user_date){
    id = 0;
    NUMAIRLINES = 3;
    date = user_date;
    city = "";
    country = "";
    totalDailyIncome = 0;
    totalDailyTransactions = 0;
    std::vector<Airline> airlines;
}
void Airport::startOperations(std::string user_date){

}

    std::string Airport::getDate(){
        return date;
    }
    std::string Airport::getCity(){
        return city;
    }
    std::string Airport::getCountry(){
        return country;
    }
    int Airport::getID(){
        return id;
    }
    void Airport::setDate(std::string user_date){
        date = user_date;
    }
    void Airport::setID(int user_id){
        id = user_id;
    }
    void Airport::setCity(std::string user_city){
        city = user_city;
    }
    void Airport::setCountry(std::string user_country){
        country = user_country;
    }

void Airport::printAllFlights(){
    std::cout<<"Los vuelos programados para: "+date+" son:"<<std::endl;
    int i=0;
    std::vector <std::string> shortname;
    while(i < airlines.size()){
        shortname[i] = airlines[i].getShortName();
        i++;
    }
    sort(shortname.begin(), shortname.end());
    int j = 0;
    while(j <= shortname[j].size()){
        std::cout<<shortname[j]<<std::endl;
    }


}

void Airport::printFlightSchedule(){

}