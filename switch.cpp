/*
*
* programa para el uso de switch o (segun sea el caso) sentencia selectiva multiple
*
* switch (<valor>) {
*   case <opcion>: <instrucciones>
*   break;
*   ..........
*   default: <instrucciones>
*   }
*
* $ g++ switch.cpp:
*
*/
#include <iostream>

using namespace std;

int main() {
  int number;

  cout << "Ingrese un numero : ? ";
  cin >> number;

  /// compara el numero leido y muestra el mensaje segun el caso que corresponda
  switch (number) {
    case 0: /// si el numero es cero
      cout << "el numero es cero. " << endl;
      break;
    case 1: /// si el numero es 1
      cout << "el numero es uno. " << endl;
      break;
    case 2:
      cout << "el numero es dos. " << endl;
      break;
    case 3:
      cout << "el numero es tres. " << endl;
      break;
    default:
      cout << "el numero es mayor a 3 o menor a 0.. " << endl;
  }

  return 0;
}
