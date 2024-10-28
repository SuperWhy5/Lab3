#include "Square.h"

bool Square::setSide(double side){
    if(side >= 0){
        this->side = side;
        return true;
    }
    else{
        return false;
    }
}

double Square::getSide(){
    return side;
}

double Square::calcArea(){
    return (side*side);
}
