#pragma once

#include "MedicionBase.h"
#include <fstream>

class Presion: public MedicionBase{
    public:
        float presionEstatica; // p
        float presionDinamica; // q

        Presion(float p = 0, float q = 0, float t = 0):
            MedicionBase(t),
            presionEstatica(p),
            presionDinamica(q) {}
        Presion(const Presion& p): //Constructor que copia posicion para poder usarlo en SaveFlightData
            MedicionBase(p.getTiempo()),
            presionEstatica(p.presionEstatica),
            presionDinamica(p.presionDinamica) {}
        void imprimir() const override;
        void serializar(std::ofstream& out) const override;
        void deserializar(std::ifstream& in) override;
};