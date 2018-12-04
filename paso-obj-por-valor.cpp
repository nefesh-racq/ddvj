/*
 programa basico de paso por valor de un objeto
 por defecto en c++ el paso de un parametro es por valor
 cuando alguna variable u objeto es pasada a una funcon por valor se pasa una copia del mismo

 $ g++ paso-obj-por-valor.cpp
*/
#include <iostream>

using namespace std;

class A {
private:
   int _valor;

public:
   A(int valor) : _valor(valor) {
      cout << "contruyendo el objeto..." << endl;
   }

   ~A() {
      cout << "destruyendo el objeto..." << endl;
   }

   int getValor() const {
      return _valor;
   }

   void setValor(int valor) {
      _valor = valor;
   }
};

/// se pasa una objeto por valor, por lo que se crea otro objeto al entrar al metodo
void mostrar(A a) {
   cout << a.getValor() << endl;
}


int main() {
   A a(8);

   mostrar(a);
   /// al terminar el programa se mostrara dos mensajes del destructor
   /// una del objeto pasado otra de la copia que se crea en el metodo
   /// no muestra dos mensajes del constructor por que c++ asigna un constructor de copia
   /// nosotros podemos definir el contructor de copia en este caso no lo hemos hecho
   return 0;
}
