#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include <iostream>
#include <vector>
#include <string>
#include "MapGeneric.h"

class MapSquare:public MapGeneric 
{
    protected:
    int f(int integer_value);
    
    public:
    MapSquare();
};
#endif 