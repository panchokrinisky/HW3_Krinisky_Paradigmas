#include <iostream>
#include <vector>
#include <string>
#include <type_traits>
#include <stdexcept>

class SaveData{  
    public:
        std::vector<double> vec_doubles;
        std::vector<std::string> palabras;
        std::vector<std::vector <int> > listas;
    template<typename T>
    void agregarDato(const T& dato){
        if constexpr (std::is_same_v<T, double>) {//Checkea que T sea del tipo double en tiempo de compilacion
            vec_doubles.push_back(dato);
        } else if constexpr (std::is_same_v<T,std::string>) {//Checkea que T sea del tipo string en tiempo de compilacion
            palabras.push_back(dato);    
        } else if constexpr (std::is_same_v<T, std::vector<int> >){//Checkea que T sea del tipo vector<int> en tiempo de compilacion
            listas.push_back(dato);
        } else throw std::invalid_argument("El tipo ingresado no es compatible con saveData");
    }
        
};