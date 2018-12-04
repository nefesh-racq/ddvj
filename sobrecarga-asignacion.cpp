/*
 ejemplo de sobrecarga del operador de asignacion =

 $ g++ sobrecarga-asignacion.cpp

*/
#include <iostream>

using namespace std;

class Obj {
public:
   Obj() : _x(0), _y(0) { }
   Obj(int x, int y) : _x(x), _y(y) { }

   Obj operator=(const Obj& obj2);  // sobrecarga del operador =
   void imprimir() const;

private:
   int _x, _y;
};

Obj Obj::operator=(const Obj &obj2) {
   _x = obj2._x;
   _y = obj2._y;

   return *this;
}

void Obj::imprimir() const {
   cout << "[" << _x << ", " << _y << "]" << endl;
}

int main() {
   Obj a(4, 2);
   Obj b(3, 3);

   // mostramos los valores con los que empiezan
   cout << "valores a : ";
   a.imprimir();
   cout << "valores b : ";
   b.imprimir();

   // asignamos "a" a "b" gracias a la sobrecarga lo podemos hacer directamente con los objetos
   cout << "(b = a)\nvalores a : ";
   a.imprimir();
   b = a;
   cout << "valores b : ";
   b.imprimir();

   return 0;
}
