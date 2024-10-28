#ifndef SQUARE_
#define SQUARE_

class Square{
    private: 
        double side;

    public: 
        Square() : side(1.0) {};

        Square(double s) : side(s) {};

        bool setSide(double side);

        double getSide();
        
        double calcArea();
};

#endif