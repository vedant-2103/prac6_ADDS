#include <iostream>
#include <vector>
#include <string>
#include "MapGeneric.h"

MapGeneric::MapGeneric()
{
  check = {};
}

std::vector<int> MapGeneric::map(std::vector<int> generic) 
{
  check.insert(check.end(),f(generic[0]));
  if (generic.size() == 1) 
  {
    return check;
  }
  
  std::vector <int> random(generic.begin()+1, generic.end());
  return map(random);
  
}








