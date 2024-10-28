#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    private:
        double radius;

        const float PI = 3.14;

    public:
        Circle() : radius(1.0) {};

        Circle(double r) : radius(r) {};

        bool setRadius(double radius);

        double getRadius();

        double calcArea();
};

#endif