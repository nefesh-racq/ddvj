/*
*
* programa basico en c++ que lee un nombre y muestra el mensaje
* de bien venida
*
* cout << "<mensaje>";
* cout << "<mensaje>" << <variable-a-mostrar>;
* cin >> <variable-a-leer>;
*
* $ g++ inicio.cpp
*
*/
#include <iostream>

using namespace std;  /// espacio de nombres para poder usar "cout" "endl" "cin"... etc

int main() {
   string name;

   cout << "Por favor, ingrese su nombre : ? " << endl;
   cin >> name;
   cout << "Hola. Bien venido " << name << "! aqui iniciamos el camino..." << endl;

   return 0;
}
