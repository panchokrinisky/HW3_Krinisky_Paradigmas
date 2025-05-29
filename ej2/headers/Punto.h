#pragma once

class Punto{
    private:
        float x;
        float y;
    public:
        Punto(float a = 0, float b = 0): x(a), y(b) {} 

        float getX() const;
        float getY() const;

        void setX(float valor);
        void setY(float valor);     
};