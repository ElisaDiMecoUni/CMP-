//Vector3D.cc
#include <iostream>
#include "Vector3D.h"
#include <cmath>

using namespace std;


//Constructor
Vector3D::Vector3D(){
  x_ = 0.;
  y_ = 0.;
  z_ = 0.;
}
Vector3D::Vector3D(double x, double y, double z){
  x_ = x;
  y_ = y;
  z_ = z;
}

//setter
void Vector3D::setX(double x) {x_ = x;}
void Vector3D::setY(double y) {y_ = y;}
void Vector3D::setZ(double z) {z_ = z;}

//getter
double Vector3D::x() const {return x_;}
double Vector3D::y() const {return y_;}
double Vector3D::z() const {return z_;}


//Utilities
void Vector3D::vecPrint() const{
  cout<< "V = ("<< x_<<"_i) + ("<< y_<<"_j) + ("<<z_<< "_k )"<< endl;
}

double Vector3D::magnitude() const{ return sqrt(pow(x_,2) + pow(y_,2) + pow(z_,2)) ;}
double Vector3D::theta() const{ return acos(z_/magnitude()) ;}
double Vector3D::phi() const{ return acos(x_/(magnitude()*sin(theta()))) ;}
double Vector3D::scalarProduct(const Vector3D& v2) const{ return x_ * v2.x_ + y_*v2.y_ + z_*v2.z_ ;}
Vector3D Vector3D::vectorProduct(const Vector3D& v2) const{
  double x = y_ * v2.z_ - z_ * v2.y_;
  double y = - (x_ * v2.z_ - z_ * v2.x_);
  double z = x_ * v2.y_ - y_ * v2.x_;
  return Vector3D(x,y,z);
}
double Vector3D::angle(const Vector3D& v2) const{
  return acos(scalarProduct(v2)/(magnitude() * v2.magnitude()));
}

  //Overloaded operators
  Vector3D Vector3D::operator+(const Vector3D& v2) const{
    double x = x_ + v2.x_;
    double y = y_ + v2.y_;
    double z = z_ + v2.z_;
    return Vector3D(x,y,z);
  };

  Vector3D Vector3D::operator-(const Vector3D& v2) const{
    double x = x_ - v2.x_;
    double y = y_ - v2.y_;
    double z = z_ - v2.z_;
    return Vector3D(x,y,z);
  };
  const Vector3D& Vector3D::operator=(const Vector3D& v2){
    double x = v2.x_;
    double y = v2.y_;
    double z = v2.z_;
    return *this;
  };
 Vector3D operator*(const double& lhs, const Vector3D& rhs) {
   return Vector3D(lhs * rhs.x() , lhs * rhs.y(), lhs * rhs.z());
 }
 Vector3D operator*(const Vector3D& lhs, const double& rhs) {
   return Vector3D(lhs.x() * rhs , lhs.y() * rhs, lhs.z() * rhs);
 }
Vector3D operator/(const Vector3D& lhs, const double& rhs) {
   return Vector3D(lhs.x() / rhs , lhs.y() / rhs, lhs.z() / rhs);
}
