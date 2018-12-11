/*
   programa sencillo para manejo de excepciones

   $ g++ excepciones.cpp
   
*/
#include <iostream>
#include <exception>
using namespace std;

int main() {
   try {
      int *array = new int[1000000000000];   // desborde
   }
   catch (bad_alloc &e) {
      cerr << "error al reservar memoria." << endl;
   }

   return 0;
}
