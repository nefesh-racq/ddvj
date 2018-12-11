/*
   ejemplo de una excepcion personalizada creada por nosotros

   $ g++ MiExcepcion.cpp

*/
#include <iostream>
using namespace std;

class MiExcepcion {
   const string &_razon;

public:
   MiExcepcion(const string &razon) : _razon(razon) {}
   const string &getRazon() const { return _razon; }
};

int main() {
   int valor;
   const string &r = "valor introducido incorrecto";

   try {
      cout << "introduzca un valor entre 1 y 10 : ? ";
      cin >> valor;

      if ((valor < 1) || (valor > 10)) {
         throw MiExcepcion(r);   // asignamos nuestra excepcion
      }
   }
   catch (MiExcepcion &e) {   // usamos nuestra excepcion
      cerr << e.getRazon() << endl;
   }

   return 0;
}
