#include <iostream>
#include <string>
#include <fstream>

std::string toString(int i){
    std::string str = std::to_string(i);
    return str;
}

std::string verifyRecurrent(int i, int total){
    int pctg = i/total;
    std::string afirmativo = "";
    if (pctg > 0.2){
        afirmativo = "Si tiene mucho contacto";
    }
    return afirmativo;

}

int main(){
    std::string Alemania = "D";
    std::string Brasil	= "PP";
    std::string Canada = "CF";
    std::string Catar = "A7";
    std::string Chile = "CC";
    std::string China = "B";
    std::string Dinamarca = "OY";
    std::string Ecuador = "HC";
    std::string Emiratos_Arabes = "A6";
    std::string España = "EC";
    std::string Estados_Unidos = "N";
    std::string Indonesia = "PK";
    std::string Japon = "JA";
    std::string Mexico = "XA";
    std::string Singapur = "9V";
    std::string Tailandia = "HS";
    int Alemania_Count = 0;
    int Brasil_Count = 0;
    int Canada_Count = 0;
    int  Catar_Count = 0;
    int Chile_Count = 0;
    int China_Count = 0;
    int Dinamarca_Count = 0;
    int Ecuador_Count = 0;
    int Emiratos_Arabes_Count = 0;
    int España_Count = 0;
    int Estados_Unidos_Count = 0;
    int Indonesia_Count = 0;
    int Japon_Count = 0;
    int Mexico_Count = 0;
    int Singapur_Count = 0;
    int Tailandia_Count = 0;
    std::string textoFile;
    std::ifstream readFile("Placas.txt");
    int total = 0;
    if (!readFile.is_open()) {
    std::cerr << "Error opening file" << std::endl;
    return 1; // Exit the program with an error code
}
    while (std::getline(readFile, textoFile)) {
        std::cout<< textoFile+"Here";
        total = total +1;
        if (textoFile == Alemania){
            Alemania_Count = Alemania_Count+1;
        } else if (textoFile == Brasil){
            Brasil_Count = Brasil_Count+1;
        } else if (textoFile == Canada){
            Canada_Count = Canada_Count+1;
        } else if (textoFile == Catar){
            Catar_Count = Catar_Count+1;
        } else if (textoFile == Chile){
            Chile_Count = Chile_Count+1;
        } else if (textoFile == China){
            China_Count = China_Count+1;
        } else if (textoFile == Dinamarca){
            Dinamarca_Count = Dinamarca_Count+1;
        } else if (textoFile == Ecuador){
            Ecuador_Count = Ecuador_Count+1;
        } else if (textoFile == Emiratos_Arabes){
            Emiratos_Arabes_Count = Emiratos_Arabes_Count+1;
        } else if (textoFile == Estados_Unidos){
            Estados_Unidos_Count = Estados_Unidos_Count+1;
        } else if (textoFile == Indonesia){
            Indonesia_Count = Indonesia_Count+1;
        } else if (textoFile == Japon){
            Japon_Count = Japon_Count+1;
        } else if (textoFile == Mexico){
            Mexico_Count = Mexico_Count+1;
        } else if (textoFile == Singapur){
            Singapur_Count = Singapur_Count+1;
        } else if (textoFile == Tailandia){
            Tailandia_Count = Tailandia_Count+1;
        } else {
            std::cout <<"Error";
        }
    }
    readFile.close();
    std::cout<< toString(total);
    std::cout<< "Numero de vuelos de Alemania: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Brasil: " + toString(Brasil_Count)+" "+verifyRecurrent(Brasil_Count, total);
    std::cout<< "Numero de vuelos de Canada: " + toString(Canada_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Catar: " + toString(Catar_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Chile: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de China: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Dinamarca: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Ecuador: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Emiratos Arabes: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de España: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Estados Unidos: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Indonesia: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Japon: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Mexico: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Singapur: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    std::cout<< "Numero de vuelos de Tailandia: " + toString(Alemania_Count)+" "+verifyRecurrent(Alemania_Count, total);
    
}
