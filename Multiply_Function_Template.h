#include <iostream>
#include <string>
using namespace std;

template <class T>
T CMultiply(T a, T b) 
{
  return (a * b);
}

int maximum() {
  int i1 = 6, i2 = 10;
  cout << CMultiply(i1, i2) << endl;
  double d1 = 1.1, d2 = 2.2;
  cout << CMultiply(d1, d2) << endl;
  //char c1 = 'c', c2 = 'd';
  //cout << CMultiply(c1, c2) << endl;
  //string s1 = "first", s2 = "second";
  //cout << CMultiply(s1, s2) << endl;    These gave compiler errors :(
  bool b1 = true, b2 = false;
  cout << CMultiply(b1, b2) << endl;
  cout << "Strings and chars can't be multiplied.\n" << endl;
  return 0;
}