#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"
#include "FilterOdd.h"

FilterOdd::FilterOdd()
{}

bool FilterOdd::g(int integer_value)
{
    if (integer_value%2 != 0)
    {
      return true;
    }
    else
    {
      return false;
    }
}
