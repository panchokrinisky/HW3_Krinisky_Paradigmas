#include <iostream>
#include "headers/Rectangulo.h"
#include "headers/Elipse.h"
#include "headers/Circulo.h"
#include "headers/Punto.h"
#include "headers/ProcesadorFigura.h"

int main() {
    Rectangulo r(0, 0, 4, 5);
    Elipse e(0, 0, 3, 2);
    Circulo c(0, 0, 2);
    Punto p(1, 1);

    std::cout << "Area del Rectangulo: " << ProcesadorFigura<Rectangulo>::calcularArea(r) << std::endl;
    std::cout << "Area de la Elipse: " << ProcesadorFigura<Elipse>::calcularArea(e) << std::endl;
    std::cout << "Area del Circulo: " << ProcesadorFigura<Circulo>::calcularArea(c) << std::endl;
    std::cout << "Area del Punto: " << ProcesadorFigura<Punto>::calcularArea(p) << std::endl;

    // Testeo con algo que no es una figura
    int x = 42;
    int areaX = ProcesadorFigura<int>::calcularArea(x);
    std::cout << "Area del int: " << areaX << std::endl;

    return 0;
}