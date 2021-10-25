#include <iostream>
#include "Vector3D.h"

using namespace std;


int main(){
  Vector3D v(1,0,0);
  Vector3D v2(0,1,0);
  Vector3D v9;
  v.vecPrint();
  v2.vecPrint();
  v9.vecPrint();


  //v.setY(0);
  //v.vecPrint();

  cout<<"Magnitude of your vector is: r= "<< v.magnitude()<< endl;
  cout<<"The angle theta (angle between vector and z axis) is: theta="<< v.theta()<<endl;
  cout<<"The angle phi (angle between vector and x axis) is: phi= "<< v.phi()<<endl;
  cout<<"Scalar product between your vecetors is: sp= "<<v.scalarProduct(v2)<< endl;



  Vector3D v3 = v.vectorProduct(v2);
  cout<< "Vector product between your vector return the vector:"<<endl;
  v3.vecPrint();

  cout<< "The angle between your vectors is: alpha= "<< v.angle(v2)<<endl;

  Vector3D v4 = v+ v2;
  cout<< "Sum of your two vector is: "<<endl;
  v4.vecPrint();

  Vector3D v5 = v - v2;
  cout<< "Subtraction of your two vector is: "<<endl;
  v5.vecPrint();

  Vector3D v6 = v2;
  cout<< "Your vector is: "<<endl;
  v6.vecPrint();

  double a = 2;
  Vector3D v7 = a*v2;
  cout<< "Your vector is: "<<endl;
  v7.vecPrint();

  Vector3D v8 = v2*a;
  cout<< "Your vector is: "<<endl;
  v8.vecPrint();

  Vector3D v10 = v2/a;
  cout<< "Your vector is: "<<endl;
  v10.vecPrint();







  return 0;
}
