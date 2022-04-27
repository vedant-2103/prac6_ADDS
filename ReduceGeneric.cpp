#include <iostream>
#include <vector>
#include <string>
#include "ReduceGeneric.h"

int ReduceGeneric::reduce(std::vector<int> reduceGeneric)
{
    if (reduceGeneric.size() == 2)
    {
        return binaryOperator(reduceGeneric[0], reduceGeneric[1]);
    }
    
    std::vector <int> temp_vector(reduceGeneric.begin(), reduceGeneric.end()-1);
    return binaryOperator(reduce(temp_vector),reduceGeneric[reduceGeneric.size()-1]);
}



