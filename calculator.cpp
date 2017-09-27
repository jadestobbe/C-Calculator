//calculator.cpp
//holds calculator class
#include "calculator.h"
float Calculator::add(float a, float b)
{
   return a + b;
}


float Calculator::subtract(float a, float b)
{
   return a - b;
}


float Calculator::multiply(float a, float b)
{
   return a * b;
}


float Calculator::divide(float a, float b)
{
   return a / b;
}


float Calculator::exponent(float a, int b)
{
   float value = 1.0;

   for (int i = 0; i < b; i++)
   {
      value = value * a;
   }
   return value;
}


int Calculator::factorial(int a)
{
   if (a == 0)
   {
      return 1;
   }
   else
   {
      return a * factorial(a - 1);
   }
}
