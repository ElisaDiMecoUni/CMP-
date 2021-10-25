#include <iostream>
using namespace std;
#include <cmath>
#include "Complex.h"

int main () {

  Complex a(-1,2);
  Complex b(0.5, 3);
  a.CartesianPrint();
   b.CartesianPrint();
  Complex c=a+b;
  Complex d=a*b;
  Complex e=a-b;
   Complex f=a/b;
   cout<< "sum"<<endl;
  c.CartesianPrint();
   cout<< "product"<<endl;
  d.CartesianPrint();
   cout<< "difference"<<endl;
  e.CartesianPrint();
   cout<< "ratio"<<endl;
  f.CartesianPrint();
   cout<< "product with double "<<endl;
   double number=2.;
   Complex g=a*number;
   Complex j=g/number;
   g.CartesianPrint();
   j.CartesianPrint();
   g.PolarPrint();
   j.PolarPrint();
   /* cout<< "ratio with double "<<endl;
    Complex h=a/number;
   h.CartesianPrint();
   */
  return 0;}
