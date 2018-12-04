/*
 paso por referencia en metodos
 las variables se pasan como referencia una referencia de la variables

 $ g++ paso-por-referencia.cpp

 */
#include <iostream>

using namespace std;

/// prototipo de la funcion swap acepta dos parametros por referencia
void swap(int &, int &);

int main() {
   int x = 12, y = 7;

   cout << "[" << x << ", " << y << "]" << endl;
   swap(x, y);
   cout << "[" << x << ", " << y << "]" << endl;

   return 0;
}


/// metodo que intercambia los valores entre a y b
void swap(int& a, int& b) {
   int aux = a;
   
   a = b;
   b = aux;
}
