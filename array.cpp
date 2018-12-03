/*
* programa basico lee n(MAX) numeros y luego los imprime
* uso de array
*
*<tipo> <nombre-variable>[<tamaño>];
*
* $ g++ array.cpp
*
*/
#include <iostream>

using namespace std;

int main() {
   int MAX = 5;
   int array[MAX];

   /// el array empieza siempre con la posicion cero "0" ese es el indice del elemento
   /// leemos los numeros
   for (int i = 0; i < MAX; i++) {
      cout << "Ingrese un numero : ? ";
      cin >> array[i];
   }

   /// imprimimos los numeros
   cout << "los numeros ingresados son..\n";
   for (int i = 0; i < MAX; i++) {
      cout << "POSICION[" << i << "] -> " << array[i] << endl;
   }

   /// una cadena tb puede declararse como un array de cacarteres
   char array_string[18] = "esto es un array";

   /// imprimimos en linea recta
   for (int i = 0; i < 18; i++) {
      cout << array_string[i];
   }

   cout << "\n\n";
   /// imprimimos letra por letra
   for (int i = 0; i < 18; i++) {
      cout << array_string[i] << endl;
   }

   /// leemos un array caracteres
   char letras[20];

   /// c++ puede leer un array de caracteres de manera directa tb imprimirlas
   cout << "ingrese una cadena menor a 20 caracteres: ? \n";
   //cin.getline(letras, 20);   /// lee 20 caracteres no importa si hay espacio
   cin >> letras; /// lee hasta que encuentra un espacio
   cout << "la cadena es : " << letras << endl;

/*
   /// asi no funiona
   cout << "numeros";
   int a[10];
   cin >> a;
   cout << a;
*/
   return 0;
}
