/**
*
* programa que convierte una cadena en mayusculas (array tipo char)
*
* $ g++ indexacion-array.cpp
*
*/
#include <iostream>

using namespace std;

int main() {
   char s[20] = "hola mundo";
   char *ptr;
   int i;

   /// convertimos la cadena en mayusculas
   for (ptr = s, i = 0; i < 20; i++) {
      ptr[i] = toupper(s[i]);
   }

   /// como es un puntero entonces los cambios los hace como si fuera el array mismo
   cout << ptr << endl;
   cout << s << endl;

   return 0;
}
