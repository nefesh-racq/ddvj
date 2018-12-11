/*
   ejemplo de clase abastracta.
   una clase es abstracta cuando tiene uno o mas metodos que son virtuales y puros
   no se puede  crear instancias de una clase abstracta, punteros si

   $ g++ clase-abstracta.cpp

*/

#include <iostream>
using namespace std;

// clase abstracta Figura
class Figura {
public:
   virtual float area() const = 0;  // funcion virtual pura
};

class Circulo : public Figura {
public:
   float _radio;

   Circulo(float radio) : _radio(radio) {}
   void setRadio(float radio) { _radio = radio;}
   float getRadio() const { return _radio; }

   float area() const {
      return _radio * _radio * 3.1416;
   }
};

int main() {
   Figura *pf;
   Circulo c(1.5);

   cout << "Area : " << c.area() << endl;

   pf = &c;
   cout << "Area: : " << pf->area() << endl;    // se usa directo porq es metodo-funcion virtual

   // hacemos el cast para acceder a un metodo q es propio de la clase Circulo
   cout << "Radio : " << static_cast<Circulo*>(pf)->getRadio() << endl;

   return 0;
}
