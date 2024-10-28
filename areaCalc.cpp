/*My Name: Ja'Vien Elmore
  My Class: CPSC 1021
  Date: 9/16/2024
  Desc: The program calculates the area of a square, cirle
  and rectangle and Trapezoid.
  Time: 3 hours
*/

#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezoid.h"
using namespace std;

//variables initialized
int userInput;
float measure;
double length, width, base1, base2, height;

//instantiate an object from the correct class
Circle circle; Square square; Rectangle rectangle; Trapezoid trapezoid;

int main(){
    //instantiate an object from the correct class
    Circle circle; Square square; Rectangle rectangle; Trapezoid trapezoid;
    
    //Menu
    cout << "1 -- circle\n\n2 -- square\n\n3 -- rectangle\n\n4 -- trapezoid\n\n5 -- quit\n";
    cin >> userInput;

    //Use switch case to perform users choice
    switch(userInput){
        //Calculate Area of a Circle
        case 1:
            cout << "Radius of the circle: ";
            cin >> measure;
            circle.setRadius(measure);

            cout << "\nRadius: " << circle.getRadius();
            cout << "\nArea: " << fixed << setprecision(1) << circle.calcArea();
            break;
            
        //Calculate Area of a Square
        case 2:
            cout << "Length of the square: ";
            cin >> measure;
            square.setSide(measure);

            cout << "\nSide: " << square.getSide();
            cout << "\nArea: " << fixed << setprecision(1) << square.calcArea();
            break;
        
        //Calculate Area of a Rectangle
        case 3:
            cout << "Length of the rectangle: ";
            cin >> length;
            rectangle.setLength(length);

            cout << "Height of the rectangle: ";
            cin >> width;
            rectangle.setWidth(width);

            cout << "\nLength: " << rectangle.getLength() << "\nWidth: " << rectangle.getWidth();
            cout << "\nArea: " << fixed << setprecision(1) << rectangle.calcArea();
            break;

        //Calculate the area of a Trapezoid
        case 4:
            cout << "Base 1 of the Trapezoid: ";
            cin >> base1;
            trapezoid.setBase1(base1);

            cout << "Base 2 of the Trapezoid: ";
            cin >> base2;
            trapezoid.setBase2(base2);

            cout << "Height of the Trapezoid: ";
            cin >> height;
            trapezoid.setHeight(height);

            cout << "\nBase1: " << trapezoid.getBase1() << "\nBase2: " << trapezoid.getBase2() << "\nHeight: " << trapezoid.getHeight();
            cout << "\nArea: " << fixed << setprecision(1) << trapezoid.calcArea();
            break;
        //Quit program
        case 5:
            break;
        //Error Message
        default:
            cout << "You entered an invalid choice. Good bye!";
    }
    
    return 0;
}
