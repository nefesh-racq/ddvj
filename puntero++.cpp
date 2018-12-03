/*
*
* programa uso de puntero para imprimir cadena
* incremento de punteros
*
* $ g++ puntero++.cpp
*
*/
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
   char s[100];
   char *ptr;

   ptr = s;

   do {
      cout << "ingrese una cadena : ? ";
      cin >> ptr;

      while (*ptr)
         cout << *ptr++ << " ";

      cout << endl;
      ptr = s;
   }
   while (strcmp(s, "fin"));


   return 0;
}
