//Complex.h
#ifndef Complex_h
#define Complex_h

#include <string>

class Complex {
 public:
  //constructor
  Complex(double re, double im);
  // Defining complex number, without specify the definition as third argument (see below),
  // as (real, immaginary) part by deafault.

  Complex(double re, double im, const std::string& def);
  // USAGE: first argument-> could be the real part or the radious of complex number.
  //        second argument-> could be the imaginary part or the phase of complex number.
  //        third argument-> is a string to specify how it's written your complex number.
  //                        (radius * e^iphase) or (real +i * imaginary).
  //                        For (radius * e^iphase) ---> "radiusPhase".
  //                        For (real + i imaginary) ----> "realImaginary"

  // WARNINGS: Using "radiusPhase" declaration involves usage of sin and cos wich
  //           are not precise as possible. i.g. sin(pi)!=0
  //           That happens due to the fact the definition o pi it's not precise.



  //getters
  double re() const; //return the real part of comp.number
  double im() const; //return the imaginary part of comp.number

  //setters
  void setRe(double re); //set the real part of comp.number
  void setIm(double im); //set the imaginary part of comp.number

  //utilities
  double mag() const; //return the magnitude of comp.number
  double phase() const; //return the phase of comp.number
  double r() const; //return magnitude of comp.number
  double phi() const; //return phase of comp.number
  void CartesianPrint() const; //print the cartesian rappresentation of comp.number
  void PolarPrint() const; //print the polar rappresentation of comp.number

  //overloaded operators
  Complex operator+(const Complex& rhs) const; // return the sum of complex number
  Complex operator-(const Complex& rhs) const; // retunrn the subtraction of complex number
  Complex operator*(const Complex& rhs) const; // return the product of complex number
  Complex operator/(const Complex& rhs) const; // return the division of complex number

  const Complex& operator=(const Complex& rhs);
  const Complex& operator+=(const Complex& rhs);
  const Complex& operator-=(const Complex& rhs);
  const Complex& operator*=(const Complex& rhs);
  const Complex& operator/=(const Complex& rhs);
 private:
  double re_;
  double im_;
  std::string def_;
};

//global function
Complex operator*(const double& lhs, const Complex& rhs); // Used to multiply doubles with complex numb.
Complex operator*(const Complex& lhs,const double& rhs); // Used to multiply complex numb. with doubles
Complex operator/(const Complex& lhs,const double& rhs); // Used to devide complex numb. with doubles.
#endif
