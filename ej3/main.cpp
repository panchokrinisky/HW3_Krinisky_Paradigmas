#include <iostream>
#include <vector>
#include <string>
#include "SaveData.h"
#include "JSON.h"

int main() {
    SaveData data;
    data.agregarDato(1.3);
    data.agregarDato(2.1);
    data.agregarDato(3.2);
    data.agregarDato(std::string("Hola"));
    data.agregarDato(std::string("Mundo"));
    data.agregarDato(std::vector<int>{1, 2});
    data.agregarDato(std::vector<int>{3, 4});

    //Crea el JSON con los datos almacenados
    JSON json(data.vec_doubles,data.palabras,data.listas);

    json.printJSON();

    return 0;
}