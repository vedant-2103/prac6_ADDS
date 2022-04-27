#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"
#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive()
{}

bool FilterNonPositive::g(int integer_value)
{
    if (integer_value<=0)
    {
        return true;
    }
  
    else
    {
        return false;
    }
}
