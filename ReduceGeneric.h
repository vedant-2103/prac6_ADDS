#ifndef ReduceGeneric_H
#define ReduceGeneric_H
#include <iostream>
#include <vector>
#include <string>

class ReduceGeneric
{
    public:
    int reduce(std::vector<int> reduceGeneric);
    
    protected:
    virtual int binaryOperator(int number1, int number2) = 0;
};
#endif