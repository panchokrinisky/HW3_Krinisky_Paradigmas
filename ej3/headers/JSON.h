#include <iostream>
#include <vector>
#include <string>

class JSON{
    private:
        std::vector<double> vec_doubles;
        std::vector<std::string> palabras;
        std::vector<std::vector <int> > listas;
    public:
        JSON(std::vector<double> d, std::vector<std::string> p, std::vector<std::vector <int> > i):
            vec_doubles(d), palabras(p), listas(i) {}
        void printJSON() const;

};