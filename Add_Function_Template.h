#include <iostream>
#include <string>
using namespace std;

template <class T>
T CAddition(T a, T b, T c) {
  return (a + b + c);
}

int add() {
  int i1 = 3, i2 = 12, i3 = 15;
  

cout << CAddition(i1, i2, i3) << endl;
  double d1 = 1.1, d2 = 2.2 , d3 = 3.3;
  cout << CAddition(d1, d2, d3) << endl;
  char c1 = 'c', c2 = 'd', c3 = 'c';
  cout << CAddition(c1, c2, c3) << endl;
  string s1 = "first ", s2 = "second ", s3 = "third ";
  cout << CAddition(s1, s2, s3) << endl; 
  bool b1 = true, b2 = false, b3 = true;
  cout << CAddition(b1, b2, b3) << endl;

  return 0;

  // char did not work becasue it cannot be added. gave us a * 
}