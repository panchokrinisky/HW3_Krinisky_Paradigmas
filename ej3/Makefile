CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -Iheaders
SRC = main.cpp source/JSON.cpp
OUT = ej3

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)