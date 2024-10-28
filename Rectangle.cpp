#include "Rectangle.h"

bool Rectangle::setLength(double length){
    if(length >= 0){
        this->length = length;
        return true;
    }
    else{
        return false;
    }
}

double Rectangle::getLength(){
    return length;
}

bool Rectangle::setWidth(double width){
    if(width >= 0){
        this->width = width;
        return true;
    }
    else{
        return false;
    }
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::calcArea(){
    return length*width;
}