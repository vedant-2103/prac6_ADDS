#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGeneric.h"
#include "ReduceGCD.h"

int main() 

{
  
  std::vector<int> List = {};
  string input;
  
  getline(cin, input);
  
  
  MapGeneric * vector1 = new MapAbsoluteValue();
  MapGeneric * vector2 = new MapTriple();
  
  std::vector <int> List2 = vector2->map(vector1->map(List));
 
  FilterGeneric * vector3 = new FilterForTwoDigitPositive();
  FilterGeneric * vector4 = new FilterOdd();
  
  std::vector <int> List3 = vector3->filter(vector4->filter(List2));

  ReduceGeneric * vector5 = new ReduceMinimum();
  ReduceGeneric * vector6 = new ReduceGCD();
  
  return 0;

}

