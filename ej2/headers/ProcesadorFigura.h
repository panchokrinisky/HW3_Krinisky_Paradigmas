#pragma once

#include "Elipse.h"
#include "Circulo.h"
#include "Punto.h"
#include "Rectangulo.h"
#define PI 3.141592653589793 //Defino pi como una constante para no tener que incluir cmath
#include <iostream>
#include <stdexcept>


template <typename T>
class ProcesadorFigura{
    public:
        static float calcularArea(const T& figura); 
};

template <typename T> // Implementacion del T generico (por si se usa sin un objeto de las clases de figuras)
float ProcesadorFigura<T>::calcularArea(const T&) { //No le pongo nombre al parametro porque no se usara
    throw std::invalid_argument("El parametro insertado no es compatible con calcularArea.");
    return 0;
}

template <> //Implementacion para Rectangulo
float ProcesadorFigura<Rectangulo>::calcularArea(const Rectangulo& r) {
    return r.getLargo() * r.getAncho();
}

template <> //Implementacion para Elipse
float ProcesadorFigura<Elipse>::calcularArea(const Elipse& e) {
    return PI * e.getSMayor() * e.getSMenor();
}
template <> //Implementacion para Rectangulo Punto
float ProcesadorFigura<Punto>::calcularArea(const Punto&) { //No le pongo nombre al parametro porque no se usara
    return 0;
}

template <> //Implementacion para Circulo
float ProcesadorFigura<Circulo>::calcularArea(const Circulo& c) {
    return PI * c.getRadio() * c.getRadio();
}
