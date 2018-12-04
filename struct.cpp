/*
 programa basico de uso de struct
 si usas un puntero se accede usando "->" ptr->campo
 si se usa la variable normal esl acceso es directo var.campo

 $ g++ struct.cpp

*/

#include <iostream>

using namespace std;

struct person {
   string name;
   int years;
};

void update_name(person *p, const string& new_name) ;

int main() {
   person p;
   person *q;

   p.name = "luis";
   p.years = 24;
   q = &p;

   cout << q->name << endl;
   update_name(q, "sergio");
   cout << q->name << endl;
   /// se puede imprimir usando *ptr como es referencia a la variable se puede usar el operador .
   /// para acceder a sus campos
   cout << (*q).name << endl;

   return 0;
}

void update_name(person *p, const string& new_name) {
   p->name = new_name;
}
