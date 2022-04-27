#ifndef ReduceGCD_H
#define ReduceGCD_H
#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"

class ReduceGCD:public ReduceGeneric         
{
    protected:
    int binaryOperator(int number1, int number2);
    
    public:
    ReduceGCD();
};
#endif 