//calculator.cpp
//holds calculator class
#include <iostream>
class Calculator{
public:
  float add(float a, float b){
    return a+b;
  }
  float subtract(float a, float b){
    return a-b;
  }
  float multiply(float a, float b){
    return a*b;
  }
  float divide(float a, float b){
    try{
      if(b == 0.0){
        throw(1);
      }
    }
    catch{
      std::cout << "Can't divide by 0" << endl;
      exit(1);
    }
    return a/b;
  }
  float exponent(float a, int b){
    float value = 1.0;
    for(int i = 0; i < b; i++){
      value = value * a;
    }
    return value;
  }
  int factorial (int a){
    if (a == 0){
      return 1;
    }
    else{
      return a * factorial(a-1);
    }
  }

};
