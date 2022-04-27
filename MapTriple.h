#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include <iostream>
#include <vector>
#include <string>
#include "MapGeneric.h"

class MapTriple:public MapGeneric 
{
    protected:
    int f(int integer_value);
       
    public:
    MapTriple();
};
#endif  