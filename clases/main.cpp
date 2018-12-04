/*
 prorgama principal para el manejo de clases
 uso de punteros para manipulacion de objetos

 make
*/
#include <iostream>

#include "Figura.h"

using namespace std;

int main() {
   Figura *f1;
   /// new reserva un espacio de memoria para el puntero f1
   f1 = new Figura(1.8, 3.8);

   /// se usa -> para el acceso a los miembros del objeto por q son punteros
   cout << "[" << f1->getX() << ", " << f1->getY() << "]" << endl;

   Figura *figura = new Figura(2.5, 1.02);
   cout << "[" << figura->getX() << ", " << figura->getY() << "]" << endl;

   delete f1;
   delete figura;
   
   return 0;
}
