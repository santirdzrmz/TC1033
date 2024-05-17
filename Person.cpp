#include <iostream>
#include <string>
// Encapsulaci—n: Que nadie puede acceder a los atributos directamente
//Person.h
class Person{
private:
    std::string name;//Setter y getter por cada atributo
    std::string address;
    std::string phone;
public:
 
    Person(){}       //Constructor
    ~Person(){}     //Destructor. Tilde n, vergulilla n.  alt+126
    //Polimorfismo
    Person(std::string new_name,std::string new_address,std::string new_phone);
   
    void set_name(std::string new_name);
    void set_address(std::string new_address);
    void set_phone(std::string new_phone);
    std::string get_name();
    std::string get_address();
    std::string get_phone();
};
//Person.cpp
Person::Person(std::string new_name,std::string new_address,std::string new_phone)
{
    name = new_name;
    address = new_address;
    phone = new_phone;
}
void Person::set_name(std::string new_name)
{
   name = new_name; 
}
void Person::set_address(std::string new_address)
{
    address = new_address;
}
void Person::set_phone(std::string new_phone)
{
    phone = new_phone;
}
std::string Person::get_name()
{
    return name;
}
std::string Person::get_address()
{
    return address;
}
std::string Person::get_phone()
{
    return phone;
}

int main()
{
    Person mario("Mario","San Luis Potosi","8173546731");
    Person maria("Maria","CDMX","8114866714");
    Person heron("Heron", "Monterrey", "8123679071");
    Person diego("Heron", "Barcelona", "8193824657");
    Person elena("Elena", "Nueva York", "8181839203");
    std::cout<<"Datos de objeto 1: "<<std::endl;
    std::cout<< mario.get_name()<<std::endl;
    std::cout<< mario.get_address()<<std::endl;
    std::cout<< mario.get_phone()<<std::endl;
    std::cout<<"Datos de objeto 2: "<<std::endl;
    std::cout<< maria.get_name()<<std::endl;
    std::cout<< maria.get_address()<<std::endl;
    std::cout<< maria.get_phone()<<std::endl;
    std::cout<<"Datos de objeto 3: "<<std::endl;
    std::cout<< heron.get_name()<<std::endl;
    std::cout<< heron.get_address()<<std::endl;
    std::cout<< heron.get_phone()<<std::endl;
    std::cout<<"Datos de objeto 4: "<<std::endl;
    std::cout<< diego.get_name()<<std::endl;
    std::cout<< diego.get_address()<<std::endl;
    std::cout<< diego.get_phone()<<std::endl;
    std::cout<<"Datos de objeto 5: "<<std::endl;
    std::cout<< elena.get_name()<<std::endl;
    std::cout<< elena.get_address()<<std::endl;
    std::cout<< elena.get_phone()<<std::endl;
    return 0;
}
