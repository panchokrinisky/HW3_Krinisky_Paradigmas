#pragma once

#include <fstream>
#include "IMediciones.h"
#include <memory>

class MedicionBase: public IMediciones{
    protected:
        std::unique_ptr <float> tiempoMedicion;
        MedicionBase(float t=0){tiempoMedicion = std::make_unique<float>(t);} //Creo un constructor en protected para simplificar los constructores de las subclases
    public:
        float getTiempo() const ;
        virtual void imprimir() const = 0; 
        //Vuelvo a declarar como metodos virtuales puros a serializar y deserializar para recien implementarlos en posicion y presion
        virtual void serializar(std::ofstream& out) const = 0;
        virtual void deserializar(std::ifstream& in) = 0;

};