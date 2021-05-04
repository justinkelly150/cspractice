/**
 * @file triangle.cpp
 * @author your name (you@domain.com)
 * @brief Implementation of Triangle class.
 * @version 0.1
 * @date 2021-05-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "triangle.h"

using namespace std;
/**
 * @brief Uses the Triangle's area formula to calc area.
 * 
 * @param height 
 * @param length 
 * @return double - Returns area.
 */
double Triangle::triarea(int height, int length)
{
    double triresult = length * height * (1/2);
    return triresult;
}
