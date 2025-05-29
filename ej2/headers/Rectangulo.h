#pragma once

class Rectangulo{
    private:
        float x; //posicion en x de su vertice inferior izquierdo
        float y; //posicion en y de su vertice inferior izquierdo
        float ancho;
        float largo;
    public:
        Rectangulo(float a=0, float b=0, float _ancho=0, float _largo=0):
            x(a), y(b), ancho(_ancho), largo(_largo) {}
    
        float getX() const;
        float getY() const;
        float getAncho() const;
        float getLargo() const;

        void setX(float valor);
        void setY(float valor);
        void setAncho(float valor);
        void setLargo(float valor);   
};