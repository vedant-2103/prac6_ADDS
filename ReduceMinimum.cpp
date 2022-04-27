#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"

ReduceMinimum::ReduceMinimum()
{}

int ReduceMinimum::binaryOperator(int number1, int number2) 
{
    if(number1>number2) 
    {
        return number2;
    }
    else 
    {
        return number1;
    }
}

