#include <iostream>
#include "Vehiculo.cpp"

using namespace std;

class Coche : public Vehiculo {
   int _PMA;

public:
   void setPMA(int PMA) { _PMA = PMA; }
   int getPMA() const { return _PMA; }

   void mostrar() {
      cout << "Ruedas : " << getRuedas() << endl;        // metodo heredado getRuedas()
      cout << "Pasajeros : " << getPasajeros() << endl;  // metodo heredado getPasajeros()
      cout << "PMA : " << _PMA << endl;
   }
};
