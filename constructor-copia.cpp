/*
 uso del contructor de copía de una clase

 $ g++ contructor-copia.cpp

*/
#include <iostream>

using namespace std;

class A {
private:
   int *_valor;

public:
   A(int valor);     /// contructor
   A(const A &obj);  /// contructor de copia
   ~A();             /// destructor

   int getValor() const { return *_valor; }
};

A::A(int valor) {
   cout << "contruyento..." << endl;
   _valor = new int;
   *_valor = valor;
}

A::A(const A &obj) {
   cout << "contructor de copia..." << endl;
   _valor = new int;
   *_valor = obj.getValor();
}

A::~A() {
   cout << "destruyendo..." << endl;
}

void mostrar(A a) {
   cout << a.getValor() << endl;
}

int main() {
   A a(34);

   /*
   al pasar un objeto como definimos el contructor de copia entonces
   se crea un nuevo objeto, asi no hay conflictos con el espacio de memoria que
   reserva el objeto, y muestra dos mensajes de creacion de objetos
   */
   mostrar(a);

   return 0;
}
