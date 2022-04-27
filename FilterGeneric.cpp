#include "FilterGeneric.h"
#include <iostream>
#include <vector>
#include <string>

std::vector<int> FilterGeneric::filter(std::vector<int> vector_Numbers)
{
  
  if(g(vector_Numbers[0]) == true)
  {
    temp_vector.insert(temp_vector.end(),vector_Numbers[0]);
  }  
  
  if (vector_Numbers.size() == 1)
  {
    return temp_vector;
  }
  
  std::vector <int> num(vector_Numbers.begin()+1, vector_Numbers.end());
  return filter(num);
}
