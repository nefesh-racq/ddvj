/*
  programa de sobrecarga de asignacion 2

*/
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class A {
private:
   char *_valor;

public:
   A() { _valor = 0; }
   A(const A &obj);  // constructor de copia
   ~A() { if(_valor) delete [] _valor; cout << "Liberado.." << endl; }

   void mostrar() const { cout << _valor << endl; }
   void set(char *valor);
   A& operator=(const A &obj);   // sobrecargando operador = para solucionar el fallo de main
};

A::A(const A &obj) {
   _valor = new char[strlen(obj._valor) + 1];
   strcpy(_valor, obj._valor);
}

void A::set(char *valor) {
   delete [] _valor;
   _valor = new char(strlen(valor) + 1);
   strcpy(_valor, valor);
}


/*
   implementacion del metodo sobrecargado de = para solucionar el fallo de main obj = entrada();
*/
A& A::operator=(const A& obj) {
   if (strlen(obj._valor) > strlen(_valor)) {
      delete [] _valor;
      _valor = new char[strlen(obj._valor) + 1];
   }

   strcpy(_valor, obj._valor);

   return *this; // devolvemos una referencia a esta clase
}
/*
*/
A entrada() {
   char entrada[80];
   A a;

   cout << "Inserte un texto : ? ";
   cin >> entrada;

   a.set(entrada);

   return a;
}

int main() {
   A obj;

   obj = entrada();  // fallo porque apuntan a la misma memoria
   obj.mostrar();

   return 0;
}
