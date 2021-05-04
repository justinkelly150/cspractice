/**
 * @file rectangle.cpp
 * @author your name (you@domain.com)
 * @brief Implementation of the Rectangle class.
 * @version 0.1
 * @date 2021-05-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "rectangle.h"

using namespace std;
/**
 * @brief Uses the rectangle area formula to calc the area.
 * 
 * @param height 
 * @param length 
 * @return int - Returns the area.
 */
int Rectangle::recarea(int height, int length)
{
    int recresult = length * height;
    return recresult;
}