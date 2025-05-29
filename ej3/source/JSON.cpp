#include "JSON.h"

void JSON::printJSON() const {
    //Print de vec_doubles
    std::cout << "{ \"vec_doubles\" : [";
    for (size_t i = 0; i < vec_doubles.size(); ++i) {
        std::cout << vec_doubles[i];
        if (i + 1 != vec_doubles.size()) std::cout << ", ";
    }
    std::cout << "],\n";

    //Print de palabras
    std::cout << "  \"palabras\" : [";
    for (size_t i = 0; i < palabras.size(); ++i) {
        std::cout << "\"" << palabras[i] << "\"";
        if (i + 1 != palabras.size()) std::cout << ", ";
    }
    std::cout << "],\n";
    
    //Print de listas
    std::cout << "  \"listas\" : [\n";
    for (size_t i = 0; i < listas.size(); ++i) {
        std::cout << "    [";
        for (size_t j = 0; j < listas[i].size(); ++j) {
            std::cout << listas[i][j];
            if (j + 1 != listas[i].size()) std::cout << ", ";
        }
        std::cout << "]";
        if (i + 1 != listas.size()) std::cout << ",";
        std::cout << "\n";
    }
    std::cout << "  ]\n";
    std::cout << "}" << std::endl;
}