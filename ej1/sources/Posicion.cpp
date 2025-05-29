#include "Posicion.h"
#include <iostream>
#include <fstream>
#include <memory>

void Posicion::imprimir() const {
    std::cout << "La posicion en tiempo " << getTiempo() << " :" << std::endl;
    std::cout << "Latitud: " << latitud << std::endl;
    std::cout << "Longitud: " << longitud << std::endl;
    std::cout << "Altitud: " << altitud << std::endl;
}
void Posicion::serializar(std::ofstream& out) const {
    float tiempo = getTiempo(); //Guardo el valor de tiempo en una variable ya que no puedo pasar directamente el unique ptr
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&tiempo),sizeof(float));
}
void Posicion::deserializar(std::ifstream& in) {
    float tiempo; //Variable temporal para guardar el valor de tiempo y luego lo convierto en unique ptr de nuevo
    in.read(reinterpret_cast<char*>(&latitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&tiempo),sizeof(float));
    tiempoMedicion = std::make_unique<float>(tiempo);

}

