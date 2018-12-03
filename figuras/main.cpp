/*
*
* programa para la compilacion con diferentes archivos
*
* $ g++ -Iheaders -c Circle.cpp
* $ g++ -Iheaders -c Square.cpp
* $ g++ -Iheaders -c Triangle.cpp
* $ g++ Circle.o Square.o Triangle.o main.cpp 
*
*/
#include <iostream>

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

int main() {
   Square square(5);
   Triangle triangle(4, 3);
   Circle circle(10);

   cout << "area cuadrado : " << square.getArea() << endl;
   cout << "area triangulo : " << triangle.getArea() << endl;
   cout << "area circulo : " << circle.getArea() << endl;

   return 0;
}
