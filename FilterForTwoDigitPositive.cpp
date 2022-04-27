#include <iostream>
#include <vector>
#include <string>
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){}

bool FilterForTwoDigitPositive::g(int integer_value)
{
  
  if ((integer_value>99) || (integer_value<10))    
  {  
    return false;   
  }
  else
  {
    return true;
  }
}
