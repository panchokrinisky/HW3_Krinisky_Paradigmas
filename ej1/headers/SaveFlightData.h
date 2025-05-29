#pragma once

#include "Posicion.h"
#include "Presion.h"
#include <fstream>
#include <memory>


class SaveFlightData{
    public:
        Posicion posicion;
        Presion presion;
        SaveFlightData(const Posicion& p=Posicion(), const Presion& q=Presion()): //El default para cuando no se insertan parametros son todos los valores en 0
            //Usa directamente el cosntructor de copia ya que le estoy pasando objetos en vez de parametros
            posicion(p),
            presion(q) {}
        void serializar(std::ofstream& out) const;
        void deserializar(std::ifstream& in);
        void imprimir() const;

};