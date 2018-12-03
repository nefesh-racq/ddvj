#include "Figure.h"
#define MI_PI 3.1416

class Circle : public Figure {
private:
   float radious_;

public:
   Circle(float radious);
   float getArea() const;
};
