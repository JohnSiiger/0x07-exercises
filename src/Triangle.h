#ifndef TRIANGLE_H
#define TRIANGLE_H
using namespace std;

class Triangle(){
  public:
    Triangle();
    Triangle(double a, double b, double c);
    void setSides(doubla a, double b, double c);
    double circumference();
    double area();
    void print()
  private:
    double a;
    double b;
    double c;
};

#endif
