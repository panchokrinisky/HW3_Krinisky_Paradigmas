CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -Iheaders
SRC = main.cpp source/Rectangulo.cpp source/Elipse.cpp source/Circulo.cpp source/Punto.cpp
OUT = ej2

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)