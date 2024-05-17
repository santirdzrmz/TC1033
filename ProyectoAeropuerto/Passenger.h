#include <iostream>
#include <string>
class Passenger {
    public:
    Passenger();
    std::string getName();
    int getNumber();
    void setUserInfo(int user_number, std::string user_name);
    void setName(std::string user_name);
    void setNumber(int user_number);
    private:
    int number;
    std::string name;

};