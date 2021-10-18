//Complex.h
#ifndef Complex_h
#define Complex_h

class Complex {
 public:
  //constructor
  Complex(double re, double im){
  re_=re;
  im_=im;
};

  //getters
  double re() const;
  double im() const;

  //setters
  void setRe(double re);
  void setIm(double im);

  //utilities
  double mag() const;
  double phase() const;
  double r() const;
  double phi() const;
  void CartesianPrint() const;
  //other prints
  
  //overloaded operators
  Complex operator+(const Complex& rhs) const;
  Complex operator-(const Complex& rhs) const;
  Complex operator*(const Complex& rhs) const;
  Complex operator/(const Complex& rhs) const;
  
  const Complex& operator=(const Complex& rhs);
  const Complex& operator+=(const Complex& rhs);
  const Complex& operator-=(const Complex& rhs);
  const Complex& operator*=(const Complex& rhs);
  const Complex& operator/=(const Complex& rhs);
 private:
  double re_;
  double im_;
};

//global function
Complex operator*(const double& lhs, const Complex& rhs);
//Complex operator/(const Complex& rhs, const double& lhs);
#endif
