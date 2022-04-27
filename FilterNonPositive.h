#ifndef FilterNonPositive_H
#define FilterNonPositive_H
#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"

class FilterNonPositive:public FilterGeneric
{
    protected:
    bool g(int integer_value);

    public:
    FilterNonPositive();  
};
#endif
