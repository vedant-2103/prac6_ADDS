#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <iostream>
#include <vector>
#include <string>

class FilterGeneric

{
    
    public:
    std::vector<int> filter(std::vector<int> vector_Numbers);
    
    private:
    std::vector<int> temp_vector;
    virtual bool g(int integer_value) = 0;

};

#endif 
