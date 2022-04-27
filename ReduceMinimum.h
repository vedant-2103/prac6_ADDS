#ifndef ReduceMinimum_H
#define ReduceMinimum_H
#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"

class ReduceMinimum:public ReduceGeneric
{
    protected:
    int binaryOperator(int number1, int number2);
        
    public:
    ReduceMinimum();
};
#endif 