/*
*
* programa para basico de estructura selectiva "if-else"
* simple y anidada
*
* if (<condicion>) { <instrucciones..> }
* else { <isntrucciones..> }
*
* $ g++ if-else.cpp
*
*/
#include <iostream>

using namespace std;

int main() {
   int nro0, nro1;

   cout << "insgrese dos numeros." << endl;
   cout << "primer numero : ? ";
   cin >> nro0;
   cout << "segundo numero : ? ";
   cin >> nro1;

   /// sentencia if simple
   /// compara si los numeros son iguales el mensaje solo se muestra si son iguales
   if (nro1 == nro0) {
      cout << "los numeros son iguales..." << endl;
   }

   /// sentencia if-else
   /// compara si el numero1 es o no es igual a 5
   if (nro1 == 5) {
      cout << "el numero " << nro1 << " es igual a 5.." << endl;
   }
   else {
      cout << "el numero " << nro1 << " no es igual a 5.." << endl;
   }

   // senetencia if-else-if
   /// compara si el numero0 es positivo o negativo
   if (nro0 > 0) {
      cout << "el numero " << nro0 << " es positivo." << endl;
   }
   else if (nro0 < 0) {
      cout << "el numero " << nro0 << " es negativo." << endl;
   }

   /// sentencia if-else anidada
   /// compara si numero1 es mayor o igual a cero o menor
   /// solo es ejemplo de uso
   if (nro1 >= 0) {
      if (nro1 == 0) {
         cout << "el numero es cero." << endl;
      }
      else {
         cout << "el numero " << nro1 << " es mayor a 0.." << endl;
      }
   }
   else {
      cout << "el numero " << nro1 << " es menor a cero.." << endl;
   }

   return 0;
}
