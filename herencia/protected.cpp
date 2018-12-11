#include <iostream>
using namespace std;

class Vehiculo {
protected:
   int _ruedas;
   int _pasajeros;
   //....
};

// todos los miembros heredados protegido son privados apartir de esta clase
class Coche : private Vehiuclo {
   int _PMA;

public:
   // ...
   void mostrar() const {
      cout << "Ruedas : " << _ruedas << endl;
      cout << "pasajeros : " << _pasajeros << endl;
      cout << "PMA : " << _PMA << endl;
   }
};
