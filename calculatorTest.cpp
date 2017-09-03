#include "calculator.h"
#include <iostream>

using namespace std;

Calculator calc;

void addTest(){
  float expected = 3.0;
  float actual = calc.add(1.0, 2.0);
  if(expected != actual){
    cout << "addTest failed"<< endl;
  }
}
void subTest(){
  float expected = -100.0;
  float actual = calc.subtract(100.0, 200.0);
  if(expected != actual){
    cout << "subTest failed"<< endl;
  }
}
void factorialTest(){
  int expected = 120;
  int actual = calc.factorial(5);
  if(expected != actual){
    cout << "factorialTest failed"<< endl;
  }
}
int main(){
  addTest();
  subTest();
  factorialTest();
  cout << "Test Finished" << endl;
  return 0;
}
