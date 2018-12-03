/*
* programa basico de la sentencia do-while (hacer-mientras)
*
* do {
*  <instrucciones>
* }
* while (<control-del-limite>);
*
* $ g++ do-while.cpp
*
*/
#include <iostream>

using namespace std;

int main() {
   int limite;

   /// leemos un numero hasta que sea igual o mayors a 50
   do {
      cout << "ingrese un numero (0-50) : ? ";
      cin >> limite;
   }
   while (limite < 50);

   cout << "termino el ciclo.." << endl;

   return 0;
}
