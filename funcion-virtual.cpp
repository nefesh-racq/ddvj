/*
   programa de uso de funiones virtuales
   en este caso no es necesario hacer un cast al puntero padre
   para poder acceder a las funcioens de las clases hijas

   $ g++ funcion-virtual.cpp

*/
#include <iostream>
using namespace std;

class Base {
public:
   virtual void mensaje() const { cout << "soy clase base.." << endl; }
};

class Derivada1 : public Base {
public:
   void mensaje() const { cout << "soy clase derivada 1.." << endl; }
};

class Derivada2 : public Base {
public:
   void mensaje() const { cout << "soy clase derivada 2.. " << endl; }
};

int main() {
   Base *ptrB, base;
   Derivada1 de1;
   Derivada2 de2;

   ptrB = &base;
   base.mensaje();   // usa el metodo mensaje() de la clase base

   ptrB = &de1;
   ptrB->mensaje();  // usa el metodo mensaje() de la clase derivada1

   ptrB = &de2;
   ptrB->mensaje();  // usa el metodo mensaje() de la clase derivada2

   return 0;
}
