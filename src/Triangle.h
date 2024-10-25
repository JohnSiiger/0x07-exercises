#ifndef TRIANGLE_H
#define TRIANGLE_H
using namespace std;

class Triangle(){
  public:
  // Constructors
    Triangle();
    Triangle(double a, double b, double c);
  // Functions
    void setSides(double a, double b, double c);
    double circumference();
    double area();
    void print();
  // Getters
    double getA();
    double getB();
    double getC();
  // Setters
    void setA();
    void setB();
    void setC();
  private:
  // Data members
    double a;
    double b;
    double c;
};

#endif
