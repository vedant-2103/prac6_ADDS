#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"
#include "ReduceGCD.h"

ReduceGCD::ReduceGCD()
{}

int ReduceGCD::binaryOperator(int number1, int number2) 
{
    if (number1==0) 
    {
      return number2;
    }
    else if (number2==0)
    {
      return number1;
    } 
    
    if (number1==number2) 
    {
      return number1;
    }  
    
    if (number1>number2)
    {
      return binaryOperator(number1-number2, number2);
    } 
    
    return binaryOperator(number1, number2-number1); 
}
