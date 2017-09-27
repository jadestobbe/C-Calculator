#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
class Calculator {
public:
   float add(float a, float b);
   float subtract(float a, float b);
   float multiply(float, float);
   float divide(float, float);
   float exponent(float, int);
   int factorial(int);
};
#endif //CALCULATOR_H
