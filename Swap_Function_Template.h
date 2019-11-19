#include <iostream>
#include <string>
using namespace std;

template <class T>
void CSwap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
  cout << "a = " << a << ", b = " << b << endl;
}

int swap() {
  int i1 = 6, i2 = 10;
  CSwap(i1, i2);
  double d1 = 1.1, d2 = 2.2;
  CSwap(d1, d2);
  char c1 = 'c', c2 = 'd';
  CSwap(c1, c2);
  string s1 = "first", s2 = "second";
  CSwap(s1, s2);
  bool b1 = true, b2 = false;
  CSwap(b1, b2);
  cout << "\n" << endl;
  return 0;
}