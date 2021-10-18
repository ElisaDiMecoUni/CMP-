#include <cmath>
#include <iostream>
using namespace std;
#include "Complex.h"
//constructor
//Complex::Complex(double re, double im){
//re_=re;
//im_=im;
//}

//getters
double Complex::re() const {return re_;}
double Complex::im() const {return im_;}


//setters
void Complex::setRe(double re) {re_=re;}
void Complex::setIm(double im) {im_=im;}

//utilities
double Complex::mag() const {return sqrt(pow(re_,2)+pow(im_,2));}
double Complex::phase() const {return atan(re_/im_);}
double Complex::r() const {
  double r;
  r=mag();
  return r;}
double Complex::phi() const {
  double phi;
  phi=phase();
  return phi;}

void Complex::CartesianPrint() const {
  cout<<"Result: "<< re_ <<"+i("<< im_<<")"<<endl;
}

//overloaded operators
Complex Complex::operator+(const Complex& rhs) const {
  double re=re_+rhs.re_;
  double im=im_+rhs.im_;
  return Complex(re,im); 
}

Complex Complex::operator-(const Complex& rhs) const {
  double re=re_-rhs.re_;
  double im=im_-rhs.im_;
  return Complex(re,im);
 
}

Complex Complex::operator*(const Complex& rhs) const {
  double re=(re_*rhs.re_)-(im_*rhs.im_);
  double im=(re_*rhs.im_)+(im_*rhs.re_);
  return Complex(re,im);
 
}

Complex Complex::operator/(const Complex& rhs) const {
  
  double re=(re_*rhs.re_)+(im_*rhs.im_)/rhs.mag();
  double im=(im_*rhs.re_)-(re_*rhs.im_)/rhs.mag();
  return Complex(re,im);
}

Complex operator*(const double& lhs, const Complex& rhs) {
  return Complex(lhs*rhs.re(), lhs*rhs.im());
}

/*Complex operator/( const Complex& rhs, const double& lhs) {
return Complex(rhs.re()/lhs,rhs.im()/lhs);
}*/

const Complex& Complex::operator=(const Complex& rhs) {
  re_=rhs.re_;
  im_=rhs.im_;
  return *this;
}
const Complex& Complex::operator+=(const Complex& rhs) {
  re_=re_+rhs.re_;
  im_=im_+rhs.im_;
  return *this;
}
const Complex& Complex::operator-=(const Complex& rhs) {
  re_=re_-rhs.re_;
  im_=im_-rhs.im_;
  return *this;
}
const Complex& Complex::operator*=(const Complex& rhs) {
  re_=(re_*rhs.re_)-(im_*rhs.im_);
  im_=(re_*rhs.im_)+(im_*rhs.re_);
  return *this;
}

const Complex& Complex::operator/=(const Complex& rhs) {
  re_=(re_*rhs.re_)+(im_*rhs.im_)/rhs.mag();
  im_=(im_*rhs.re_)-(re_*rhs.im_)/rhs.mag();
  return *this;
}
