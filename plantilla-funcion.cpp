/*
   programa de uso de plantillas en una funcion swap

   $ g++ plantilla-funcion.cpp

*/
#include <iostream>
using namespace std;

template<class T>
void swap(T& a, T& b) {
   T c = a;

   a = b;
   b = c;
}

int main() {
   string a = "hola", b = "mundo";

   swap(a, b); // esta funcion ahora es generica

   cout << a << " " << b << endl;

   return 0;
}
