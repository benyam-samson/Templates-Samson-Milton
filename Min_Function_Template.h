#include <iostream>
#include <string>
using namespace std;

template <class T>
T CMinimum(T a, T b) {
  return (a < b)? a:b;
}

int minimum() {
  int i1 = 6, i2 = 10;
  cout << CMinimum(i1, i2) << endl;
  double d1 = 1.1, d2 = 2.2;
  cout << CMinimum(d1, d2) << endl;
  char c1 = 'c', c2 = 'd';
  cout << CMinimum(c1, c2) << endl;
  string s1 = "first", s2 = "second";
  cout << CMinimum(s1, s2) << endl; 
  bool b1 = true, b2 = false;
  cout << CMinimum(b1, b2) << endl;
  cout << "\n" << endl;
  return 0;
}