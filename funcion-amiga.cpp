/*
 uso de funciones amigas basico
 friend <nombre-funcion>(<parametros>)

 $ g++ funcion-amiga.cpp

*/
const int USADO = 1;
const int NO_USADO = 0;

class B;

class A {
private:
   int _estado;

public:
   A() { _estado = NO_USADO; }
   void setEstado(int estado) { _estado = estado; }
   friend int usado(A a, B b);   /// funcion amiga definicion en la clase que sera amiga
};

class B {
private:
    int _estado;

public:
   B() { _estado = NO_USADO; }
   void setEstado(int estado) { _estado = estado; }
   friend int usado(A a, B b);   /// funciona amiga definicion en la clase que sera amiga
};

/// funcion amiga tiene como parametro dos clases
/// se implementa como una funcion cualquiera sin especificar a que clase pertenece
int usado(A a, B b) {
   return (a._estado || b._estado);
}

#include <iostream>

using namespace std;

int main() {
   A *a = new A();
   B *b = new B();

   if (usado(*a, *b))
      cout << "estado usado : " << endl;
   else
      cout << "estado no usado : " << endl;

   delete a;
   delete b;

   return 0;
}
