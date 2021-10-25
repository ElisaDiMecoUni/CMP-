//Vector3D.h
#ifndef Vector3D_h
#define Vector3D_h

class Vector3D {
public:
  //Constructor
  Vector3D(); //constructor to initialize your vector to 0,0,0
  Vector3D(double x, double y, double z); //initialize your vector to x,y,z




  //setter
  void setX(double x); //set the value of x coord.
  void setY(double y); //set the value of y coord.
  void setZ(double z); //set the value of z coord.

  //getters
  double x() const; //return the value of x coord.
  double y() const; //return the value of y coord.
  double z() const; //return the value of z coord.


  //Utilities
  void vecPrint() const; 
  double magnitude() const;
  double theta() const;
  double phi() const;
  double scalarProduct( const Vector3D& v2) const;
  Vector3D vectorProduct( const Vector3D& v2) const;
  double angle( const Vector3D& v2) const;

  //Overloaded operators
  Vector3D operator+(const Vector3D& v2) const;
  Vector3D operator-(const Vector3D& v2) const;
  const Vector3D& operator=(const Vector3D& v2);




private:
  double x_;
  double y_;
  double z_;
};
//Global fnctions
Vector3D operator*(const double& lhs, const Vector3D& rhs);
Vector3D operator*(const Vector3D& lhs, const double& rhs);
Vector3D operator/(const Vector3D& lhs, const double& rhs);


#endif
