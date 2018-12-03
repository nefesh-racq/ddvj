/*
* programa basico de punteros, un puntero es una referencia a una variable
* UN PUNTERO APUNTA A LA DIRECCION DE MEMORIA DE UNA VARIABLE
* EL PRIMER CAMPO DE UN ARRAY ES UN PUNTERO A ESE MISMO ARRAY
*
* <tipo> *<variable>
*
* g++ punteros.cpp
*
*/

#include <iostream>

using namespace std;

int main() {
   int *ptr;
   char *cptr;

   int nro;
   char caracter;

   /// leemos y imprimimos un numero usando la variable y el puntero
   cout << "ingrese un numero : ? ";
   cin >> nro;
   cout << "valor de la (variable) = " << nro << endl;
   cout << "direccion de memoria de (&variable) = " << &nro << endl;
   cout << "direccion de memoria del puntero (&ptr) = " << &ptr << endl;
   cout << "direccion de memoria que contiene (ptr) = " << ptr << endl;
   cout << "valor del contenido en la direccion de memoria a la que apunta (*ptr) = " << *ptr << endl;

   ptr = &nro; /// se asigna la direccion de nro al puntero ptr
   cout << "\napuntamos el puntero a la variable (ptr = &variable)" << "\n\n";
   cout << "valor de la (variable) = " << nro << endl;
   cout << "direccion de memoria de (&variable) = " << &nro << endl;
   cout << "direccion de memoria del puntero (&ptr) = " << &ptr << endl;
   cout << "direccion de memoria que contiene (ptr) = " << ptr << endl;
   cout << "valor de la direccion de memoria a la que apunta (*ptr) = " << *ptr << endl;

   /// leemos un caracter e imprimimos la variable y el puntero
   cout << "\n\ningrese un caracter : ? ";
   cin >> caracter;
   cout << "valor de la variable (caracter) = " << caracter << endl;
   cout << "direccion de memoria de (&caracter) = " << &caracter << endl;
   cout << "direccion de memoria del puntero (&cptr) = " << &cptr << endl;
   cout << "direccion de memoria que contiene (cptr) = " << cptr << endl;
   cout << "valor del contenido en la direccion de memoria a la que apunta (*cptr) = " << *cptr << endl;

   cptr = &caracter;   // apuntamos el puntero cptr a la direccion de memoria de la variable caracter
   cout << "\n\napuntamos el puntero a la variable (cptr = &caracter)\n\n";
   cout << "valor de la variable (caracter) = " << caracter << endl;
   cout << "direccion de memoria de (&caracter) = " << &caracter << endl;
   cout << "direccion de memoria del puntero (&cptr) = " << &cptr << endl;
   cout << "direccion de memoria que contiene (cptr) = " << cptr << endl;
   cout << "valor del contenido en la direccion de memoria a la que apunta (*cptr) = " << *cptr << endl;

   /// array el primer campo es un puntero a un array
   char cadena[10];
   char *cptro;

   cout << "\n\ningrese una cadena : ? ";
   cin >> cadena;
   cout << "valor de la variable (caracter) = " << cadena << endl;
   cout << "direccion de memoria de (&caracter) = " << &cadena << endl;
   cout << "direccion de memoria del puntero (&cptr) = " << &cptro << endl;
   cout << "direccion de memoria que contiene (cptr) = " << cptro << endl;
   cout << "valor del contenido en la direccion de memoria a la que apunta (*cptr) = " << *cptro << endl;

   cptro = cadena;   /// como el primer campo del array es un puntero no es necesario usar &
   cout << "\n\napuntamos el puntero a la variable (cptro = cadena)\n\n";
   cout << "valor de la variable (caracter) = " << cadena << endl;
   cout << "direccion de memoria de (&caracter) = " << &cadena << endl;
   cout << "direccion de memoria del puntero (&cptr) = " << &cptro << endl;
   cout << "direccion de memoria que contiene (cptr) = " << cptro << endl;
   cout << "valor del contenido en la direccion de memoria a la que apunta (*cptr) = " << *cptro << endl;

   return 0;
}
