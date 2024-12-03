#include <iostream>

using namespace std;

int main() {
  char input;
  cin >> input;
  // a = 97, A = 65, a - A = 32
  // z = 122, Z = 90
  // static_cast<type> --> converts to that type
  // static casts are better cause they can easily be searched for as they are bigger in size
  if (static_cast<int>(input) >= 97 && static_cast<int>(input) <= 122){ // If lowercase
    input = static_cast<char>(static_cast<int>(input) - 32);
  }
  else{
    input = static_cast<char>(static_cast<int>(input) + 32);
  }
  cout << input;
}