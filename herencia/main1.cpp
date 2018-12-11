/*

   ejemplo de acceso a los miembros de una clase getPrimerHijo
   con un puntero de la calse padre

   $ g++ main1.cpp
   
*/
#include "Coche.cpp"

int main() {
   Vehiculo *v;      // puntero a objeto Vehiculo clase base
   Coche c;          // objeto tipo coche

   c.setRuedas(8);
   c.setPasajeros(12);
   c.setPMA(2002);

   v = &c;           // v apunta a un objjeto de tipo coche ahora

   //cout << v->getPMA() << endl;     // error en tiempo de compilacion

   cout << ((Coche*)v)->getPMA() << endl;    // no reomendable

   // para acceder a un miembro que es de la clase hija se necesita hacer un cast
   cout << static_cast<Coche*>(v)->getPMA() << endl;   // estilo c++

   // .. ... ....

   return 0;
}
