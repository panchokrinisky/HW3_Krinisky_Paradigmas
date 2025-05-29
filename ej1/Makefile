CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -Iheaders
SRC = main.cpp sources/Posicion.cpp sources/Presion.cpp sources/MedicionBase.cpp sources/SaveFlightData.cpp
OUT = ej1

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT) *.dat