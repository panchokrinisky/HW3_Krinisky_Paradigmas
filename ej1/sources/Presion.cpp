#include "Presion.h"

#include <iostream>
#include <fstream>
#include <memory>



void Presion::imprimir() const {
    std::cout << "La presion en tiempo " << getTiempo() << " :" << std::endl;
    std::cout << "Presion Estatica: " << presionEstatica << std::endl;
    std::cout << "Presion Dinamica: " << presionDinamica << std::endl;
}
void Presion::serializar(std::ofstream& out) const {
    float tiempo = getTiempo();
    out.write(reinterpret_cast<const char*>(&presionEstatica),sizeof(float));
    out.write(reinterpret_cast<const char*>(&presionDinamica),sizeof(float));
    out.write(reinterpret_cast<const char*>(&tiempo),sizeof(float));
}
void Presion::deserializar(std::ifstream& in) {
    float tiempo;
    in.read(reinterpret_cast<char*>(&presionEstatica),sizeof(float));
    in.read(reinterpret_cast<char*>(&presionDinamica),sizeof(float));
    in.read(reinterpret_cast<char*>(&tiempo),sizeof(float));
    tiempoMedicion = std::make_unique<float>(tiempo);
}