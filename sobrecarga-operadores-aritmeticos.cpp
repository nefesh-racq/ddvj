/*
 sobreacarga de operadores, ejemplo de la sobrecarga de +
 para uso con clases

 $ g++ sobrecarga-operadores-aritmeticos.cpp

*/
#include <iostream>

using namespace std;

class Point3D {
public:
   Point3D() : _x(0), _y(0), _z(9) {}
   Point3D(int x, int y, int z) :
      _x(x), _y(y), _z(z) {}
   Point3D operator+(const Point3D &obj2); /// declaracion del operador sobrecargado
   Point3D operator-(const Point3D &obj2);
   Point3D operator*(const Point3D &obj2);
   Point3D operator/(const Point3D &obj2);
   void imprimir() const;

private:
   int _x, _y, _z;
};

/// implementacion del metodo sobrecargado de +
Point3D Point3D::operator+(const Point3D &obj2) {
   Point3D resultado;

   resultado._x = this->_x + obj2._x;
   resultado._y = this->_y + obj2._y;
   resultado._z = this->_z + obj2._z;

   return resultado;
}

/// implementacion del metodo sobrecargado de -
Point3D Point3D::operator-(const Point3D &obj2) {
   Point3D resultado;

   resultado._x = this->_x - obj2._x;
   resultado._y = this->_y - obj2._y;
   resultado._z = this->_z - obj2._z;

   return resultado;
}

/// sobrecarga de *
Point3D Point3D::operator*(const Point3D &obj2) {
   Point3D resultado;

   resultado._x = this->_x * obj2._x;
   resultado._y = this->_y * obj2._y;
   resultado._z = this->_z * obj2._z;

   return resultado;
}

/// sobrecarga de /
Point3D Point3D::operator/(const Point3D &obj2) {
   Point3D resultado;

   resultado._x = this->_x / obj2._x;
   resultado._y = this->_y / obj2._y;
   resultado._z = this->_z / obj2._z;

   return resultado;
}

/*
*/

void Point3D::imprimir() const {
   cout << "[" << _x << ", " << _y << ", " << _z << "]" << endl;
}

int main() {
   Point3D a(4, 3, 8);
   Point3D b(3, 2, 1);
   Point3D c;

   cout << "a = ";   a.imprimir();
   cout << "b = ";   b.imprimir();

   cout << "suma = ";
   c = a + b;  /// como el operador + esta sobrecargado podemos usarlo sumando objetos de una clase
   c.imprimir();

   cout << "resta = ";
   c = a - b;
   c.imprimir();

   cout << "multiplicacion = ";
   c = a * b;
   c.imprimir();

   cout << "division = ";
   c = a / b;
   c.imprimir();

   return 0;
}
