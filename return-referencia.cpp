/*
 ejemplo de retorno de un metodo que devuelve una referencia

 $ g++ return-referencia.cpp

*/
#include <iostream>

using namespace std;

double &f();

double valor = 11.5;

int main() {
   double new_valor;

   cout << "valor : " << valor << endl;
   cout << "f() : " << f() << endl;
   new_valor = f();
   cout << "nuevo_valor = f() : " << new_valor << endl;

   f() = 9.8;  // se le puede usar como variable por que retorna una referencia
   /// imprime el nuevo valor asignado
   cout << "f() = 9.8 : " << f() << endl;
   /// new_valor sigue siendo 11.5
   cout << "nuevo_valor : " << new_valor << endl;
   /// el valor de la variable valor cambia por que el metodo tiene la misma referencia
   cout << "valor : " << valor << endl;

   return 0;
}

/// devuelve una referencia a la variable valores
/// asi es como si devolviera la variable no el contenido de la variable
/// y la llamada a la funcion se puede usar como una variable
double &f() {
   return valor;
}
