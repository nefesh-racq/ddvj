/*
   ejemplo de herencia y puntero a clases

   $ g++ main.cpp

*/

#include "Coche.cpp"

int main() {
   Vehiculo *v;   // puntero a objeto de tipo vehiculo
   Coche c;       // objeto de tipo coche

   c.setRuedas(4);
   c.setPasajeros(7);
   c.setPMA(1999);

   // v puntero de tipo Vehiculo tambien puede apuntar a objeto c
   // de tipo Coche, es posible por que es una clase heredada
   v = &c;

   cout << "Pasajeros: " << v->getPasajeros() << endl;

   return 0;
}
