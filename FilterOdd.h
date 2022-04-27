#ifndef FILTERODD_H
#define FILTERODD_H
#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"

class FilterOdd:public FilterGeneric
{
    protected:
    bool g(int integer_value);
    
    public:
    FilterOdd();
};
#endif