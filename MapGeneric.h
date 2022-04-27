#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <iostream>
#include <vector>
#include <string>

class MapGeneric 
{
    public:
    MapGeneric();
    std::vector<int> map(std::vector<int> generic);
        
    private:
    std::vector<int> check;
    virtual int f(int integer_value) = 0;
        
};

#endif 



