#pragma once

#include "MedicionBase.h"
#include <memory>

class Posicion: public MedicionBase{
    public:
        float latitud;
        float longitud;
        float altitud;

        Posicion(float lat = 0, float lon = 0, float alt = 0, float t = 0):
            MedicionBase(t),
            latitud(lat),
            longitud(lon),
            altitud(alt) {}
        Posicion(const Posicion& p): //Constructor que copia posicion para poder usarlo en SaveFlightData
            MedicionBase(p.getTiempo()),
            latitud(p.latitud),
            longitud(p.longitud),
            altitud(p.altitud) {}
        void imprimir() const override;
        void serializar(std::ofstream& out) const override;
        void deserializar(std::ifstream& in) override;
};