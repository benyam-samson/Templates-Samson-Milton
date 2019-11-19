//Benyam Samson and Richardson Milton, COSC 1437-58001, November 19, 2019
//Teacher: Dr. Tyson McMillan
//School: Tarrant County College Trinity River Campus
//Purpose of the Assignment: A program that uses function templates to perform basic operations with various data types.
//Skills Learned: Calling header file main functions
#include <iostream>
#include <string>
#include "Add_Function_Template.h"
#include "Min_Function_Template.h"
#include "Multiply_Function_Template.h"
#include "Swap_Function_Template.h"
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

  cout << "\nAdd Function" << endl; 
  add();
  cout << "\nMinimum Function" << endl;
  minimum();
  cout << "\nMultiply Function" << endl; 
  maximum();
  cout << "\nSwap Function" << endl;
  swap();

  return 0;
}
