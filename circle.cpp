/**
 * @file circle.cpp
 * @author your name (you@domain.com)
 * @brief Implementation of the Circle class.
 * @version 0.1
 * @date 2021-05-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "circle.h"

using namespace std;

/**
 * @brief Uses the area of a circle formula to calc area.
 * 
 * @param radius 
 * @return double 
 */
double Circle::cirarea(int radius)
{
    double cresult = 3.14 * radius * radius;
    return cresult;
}