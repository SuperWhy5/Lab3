#ifndef TRAPEZOID_
#define TRAPEZOID_

class Trapezoid{
    private:
        double base1;
        
        double base2;

        double height;
    
    public:
        Trapezoid() : base1(1.0), base2(1.0), height(1.0){};

        Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h){};

        bool setBase1(double base1);

        double getBase1();

        bool setBase2(double base2);

        double getBase2();

        bool setHeight(double height);

        double getHeight();

        double calcArea();
        
};

#endif