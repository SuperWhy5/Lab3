#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    private:
        double length;

        double width;
    
    public:
        Rectangle() : length(1.0), width(1.0){};

        Rectangle(double l, double w) : length(l), width(w) {};

        bool setLength(double length);

        double getLength();

        bool setWidth(double width);

        double getWidth();

        double calcArea();
};

#endif