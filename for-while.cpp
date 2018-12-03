/*
* programa basico de for() y while() .. sentencias repetitipas
*
* for (<valor-inicial>; <comparacion-para-el-final-del-for>; <incremento>) {
*     <instrucciones>
* }
*
* while (<comparacion-para-el-fin-de-while>) {
*     <instrucciones>
* }
*
* $ g++ for-while.cpp
*
*/
#include <iostream>

using namespace std;

int main() {
   int limite;

   cout << "ingrese un numero para la cantidad de ciclos. : ? ";
   cin >> limite;

   /// imprime el mensaje ciclo hasta que i sea igual al limite
   for (int i = 0; i < limite; i++) {
      cout << "ciclo<for> " << i << endl;
   }

   cout << "\n\n";

   /// imprime el mensaje ciclo mientras i no supere a limite
   int i = 0;  // variable para controlar el bucle

   while (i < limite) {
      cout << "ciclo<while> " << i << endl;
      i++;  /// i++ es igual a i = i + 1;
   }

   return 0;
}
