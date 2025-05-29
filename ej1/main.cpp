#include <iostream>
#include <fstream>
#include "headers/Posicion.h"
#include "headers/Presion.h"
#include "headers/SaveFlightData.h"

int main(void){

    //Testeo de Posicion
    Posicion pos(-34.6f, -58.4f, 950.0f, 5.3f);
    pos.imprimir();
    std::ofstream out("posicion.dat", std::ios::binary);
    if (out.is_open()){
       pos.serializar(out); 
       out.close();
    }
    Posicion pos2;
    std::ifstream in("posicion.dat", std::ios::binary);
    if (in.is_open()){
       pos2.deserializar(in); 
       in.close();
    }
    std::cout << "Datos deserializados de Posicion:" << std::endl;
    pos2.imprimir();

    //Testeo de presion
    Presion presion(101.3f, 5.8f, 6.1f);
    presion.imprimir();
    std::ofstream out2("presion.dat", std::ios::binary);
    if (out2.is_open()){
       presion.serializar(out2); 
       out2.close();
    }
    Presion presion2;
    std::ifstream in2("presion.dat", std::ios::binary);
    if (in2.is_open()){
       presion2.deserializar(in2); 
       in2.close();
    }
    std::cout << "Datos deserializados de Presion:" << std::endl;
    presion2.imprimir();

    // Testeo de SaveFlightData
    SaveFlightData flightData(pos, presion);
    std::ofstream out3("flightdata.dat", std::ios::binary);
    if (out3.is_open()) {
        flightData.serializar(out3);
        out3.close();
    }

    SaveFlightData flightData2;
    std::ifstream in3("flightdata.dat", std::ios::binary);
    if (in3.is_open()) {
        flightData2.deserializar(in3);
        in3.close();
    }
    std::cout << "Datos deserializados de SaveFlightData:" << std::endl;
    flightData2.imprimir();

    return 0;
}
