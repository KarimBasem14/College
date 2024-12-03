#include <iostream>
#include<iomanip>
#define PI 3.141592653

using namespace std;

int main(){
  double radius;
  cin>>radius;
  const double area = PI*radius*radius;
  cout << fixed << setprecision(9) << area; // fixed is used in cout to make it print in decimal notation rather than scientific notation.
  // Using fixed along with setprecision(n) makes cout print n digits after the decimal point.
}