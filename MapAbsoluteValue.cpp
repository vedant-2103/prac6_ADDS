#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"

MapAbsoluteValue::MapAbsoluteValue()
{}

int MapAbsoluteValue::f(int integer_value) 
{
    return abs(integer_value);
}
