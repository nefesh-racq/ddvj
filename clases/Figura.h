/*
 ejemplo de una clase en c++

*/
class Figura {
/// publiccos visible por todos (clases hijos, objetos de la clase..)
public:
   Figura(double i, double j);   /// contructor de la clase
   ~Figura();                    /// destructor de la clase

   void setDim(double i, double j);
   double getX() const;
   double getY() const;

/// visible por la jerarquia de clases (clases hijos)
protected:
   double _x, _y;

/// privados visible solo por la clase (ninguna solo esta clase)
private:
};
