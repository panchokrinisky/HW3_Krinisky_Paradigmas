#include "SaveFlightData.h"

void SaveFlightData::serializar(std::ofstream& out) const{
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(std::ifstream& in){
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData::imprimir() const {
    posicion.imprimir();
    presion.imprimir();
}