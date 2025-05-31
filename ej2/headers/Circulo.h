#pragma once

class Circulo{
    private:
        float x;
        float y;
        float radio;
    public:
        Circulo(float a=0, float b=0, float r=0): x(a), y(b), radio(r) {}

        float getX() const;
        float getY() const;
        float getRadio() const;

        void setX(float valor);
        void setY(float valor);
        void setRadio(float valor);
};