/*My Name: Ja'Vien Elmore, Louis Ladson
  My Class: CPSC 1021
  Date: 9/16/2024
  Desc: The program calculates the area of a square, cirle
  and rectangle and Trapezoid.
  Time: 35 hminutes
*/

#include "Circle.h"

bool Circle::setRadius(double radius) {
    if(radius >= 0){
        this->radius = radius;
        return true;
    }
    else {
        return false;
    }
}

double Circle::getRadius(){
    return radius;
}

double Circle::calcArea(){
    return PI*(radius*radius);
}

