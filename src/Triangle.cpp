#include "Triangle.h"
#include <cmath>
Triangle::Triangle(){
  a = 0;
  b = 0;
  c = 0;
}
Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {}
void Triangle::setSides(double a, double b, double c){
  this->a = a;
  this->b = b;
  this->c = c;
}
double Triangle::circumference(){
  return a + b + c;
}
double Triangle::area(){
  double s = (a + b + c)/2;
  double A = sqrt(s*(s-a)*(s-b)*(s-c));
  return A;
}
void Triangle::print(){
  cout << "A is the area of the triangle: " << area() <<  endl;
}
