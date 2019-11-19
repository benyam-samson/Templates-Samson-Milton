#include <iostream>
#include <string>
using namespace std;

template <class T>
T maximum(T a, T b) {
  return (a > b)? a:b;
}

int main() {
  int i1 = 6, i2 = 10;
  cout << maximum(i1, i2) << endl;
  double d1 = 1.1, d2 = 2.2;
  cout << maximum(d1, d2) << endl;
  char c1 = 'c', c2 = 'd';
  cout << maximum(c1, c2) << endl;
  string s1 = "first", s2 = "second";
  cout << maximum(s1, s2) << endl; 
  bool b1 = true, b2 = false;
  cout << maximum(b1, b2) << endl;
  return 0;
}
