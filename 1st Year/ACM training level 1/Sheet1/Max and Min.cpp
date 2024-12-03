#include<iostream>

using namespace std;

// I can obviously use a loop but the instructor in that course still hasn't explained that so i thought i'd just do it without
int main(){
  double a,b,c;
  cin>> a >> b >> c;
  if(a<=b && a<=c){
     if (b >= c){
       cout<< a << " " << b;
     }
     else {
         cout<< a << " " << c;
     }
  }
  else if(b<=a && b<=c){
    if (a >= c){
        cout<< b << " " << a;
    }
    else {
        cout<< b << " " << c;
    }
  }
  else {
    if (b >= a){
      cout<< c << " " << b;
    }
    else {
      cout<< c << " " << a;
    }
  }
}

