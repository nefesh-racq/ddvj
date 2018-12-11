/*class Entidad {
   uso de templates (plantillas)

   $ g++ plantillas.cpp

*/
#include <iostream>
using namespace std;

template<class T> // tipo generico T , nuestra plantilla
class Triangle {
public:
   Triangle(const T& v1, const T& v2, const T& v3) : _v1(v1), _v2(v2), _v3(v3) {}
   ~Triangle() {}

   T getV1() const { return _v1; }
   T getV2() const { return _v2; }
   T getV3() const { return _v3; }

private:
   T _v1, _v2, _v3;
};

class Vec2 {
public:
   Vec2(int x, int y) : _x(x), _y(y) {}
   int getX() const { return _x; }
   int getY() const { return _y; }

private:
   int _x, _y;
};

int main() {
   Vec2 p1(3, 5), p2(5, 7), p3(3, 10);
   Triangle<Vec2> triangle(p1, p2, p3);      // instanciando nuestra plantilla

   cout << "v1 [" << triangle.getV1().getX() << ", "
        << triangle.getV1().getY() << "]" << endl;

   cout << "v2 [" << triangle.getV2().getX() << ", "
        << triangle.getV2().getY() << "]" << endl;

   cout << "v3 [" << triangle.getV3().getX() << ", "
        << triangle.getV3().getY() << "]" << endl;

   return 0;
}
