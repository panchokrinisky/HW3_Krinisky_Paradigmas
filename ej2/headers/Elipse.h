#pragma once

class Elipse{
    private:
        float x;
        float y;
        float sMayor;
        float sMenor;
    public:
        Elipse(float a=0, float b=0, float mayor=0, float menor = 0): 
            x(a), y(b), sMayor(mayor), sMenor(menor) {}
        
        float getX() const;
        float getY() const;
        float getSMayor() const;
        float getSMenor() const;

        void setX(float valor);
        void setY(float valor);
        void setSMayor(float valor);
        void setSMenor(float valor);

};