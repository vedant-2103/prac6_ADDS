#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include <iostream>
#include <vector>
#include <string>
#include "MapGeneric.h"

class MapAbsoluteValue:public MapGeneric 
{
    protected:
    int f(int integer_value);
      
    public:
    MapAbsoluteValue();
  
};
#endif 