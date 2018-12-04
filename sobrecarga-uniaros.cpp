/*
 sobrecarga de los operadores unarios ++ --
 no necesitan parametros por que son unarios

 $ g++ sobrecarga-unarios.cpp

*/
#include <iostream>

using namespace std;

class Obj {
public:
   Obj() : _inc(0) { }
   Obj(int inc) : _inc(inc) { }
   // spbrecargar operadores unarios
   Obj& operator++();   // cobrecarga de operador prefijo ++inc
   Obj& operator--();  // sobrecarga de operador prefijo --inc
   Obj operator++(int);   // sobrecarga de operador postfijo inc++
   Obj operator--(int);   // sobrecarga de operador postfijo inc--
   void imprimir() const;
/*   /// otra forma de sobrecargar los operadores
   void operator++();   // cobrecarga de operador prefijo ++inc
   void operator--();   // sobrecarga de operador prefijo --inc
   void operator++(int);   // sobrecarga de operador postfijo inc++
   void operator--(int);   // sobrecarga de operador postfijo inc--
*/
private:
   int _inc;
};

Obj& Obj::operator++() {
   _inc += 1;

   return *this;
}

Obj& Obj::operator--() {
   _inc -= 1;

   return *this;
}

Obj Obj::operator++(int) {
   _inc += 1;

   return *this;
}

Obj Obj::operator--(int) {
   _inc -= 1;

   return *this;
}

void Obj::imprimir() const {
   cout << _inc << endl;
}

/*
*
*
*/
/*
/// implementaciones
void Obj::operator++() {
   _inc += 1;

//   return *this;
}

void Obj::operator--() {
   _inc -= 1;

   //return *this;
}

void Obj::operator++(int) {
   _inc += 1;
}

void Obj::operator--(int) {
   _inc -= 1;
}
*/

int main() {
   Obj a;
   Obj b(5);

   cout << "valores.\na : ";
   a.imprimir();
   cout << "b : ";
   b.imprimir();

   cout << "\nprefija.\n++a : ";
   ++a;  // es posible gracias a la sobrecarga del operadot usar el objeto a como si fuera una variable simple
   a.imprimir();
   cout << "--b : ";
   --b;  // gracias al operador sobrecargado podemos usar el bojeto como una variable normal
   b.imprimir();

   cout << "\npostfija.\na++ : ";
   a++;  // es posible gracias a la sobrecarga del operadot usar el objeto a como si fuera una variable simple
   a.imprimir();
   cout << "b-- : ";
   b--;  // gracias al operador sobrecargado podemos usar el bojeto como una variable normal
   b.imprimir();

   return 0;
}
