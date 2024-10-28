#include "Trapezoid.h"

bool Trapezoid::setBase1(double base1){
    if(base1 >= 0){
        this->base1 = base1;
        return true;
    }
    else{
        return false;
    }
}

double Trapezoid::getBase1(){
    return base1;
}

bool Trapezoid::setBase2(double base2){
    if(base2 >= 0){
        this->base2 = base2;
        return true;
    }
    else{
        return false;
    }
}

double Trapezoid::getBase2(){
    return base2;
}

bool Trapezoid::setHeight(double height){
    if(height >= 0){
        this->height = height;
        return true;
    }
    else{
        return false;
    }
}

double Trapezoid::getHeight(){
    return height;
}

double Trapezoid::calcArea(){
    return ((base1+base2)/2)*height;
}