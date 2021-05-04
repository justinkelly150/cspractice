/**
 * @file main.cpp
 * @author Justin Kelly
 * @brief Program to find the area of a circle, triangle, or rectangle.
 * @version 0.1
 * @date 2021-05-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include "menu.h"

using namespace std;
/**
 * @brief Calls menu functions and prints output.
 * 
 * @return int 
 */
int main()
{
  Menu menu;
  double cresult, triresult;
  int recresult, userChoice;

  menu.areaMenu();
  menu.choice();
/**
 * @brief User chooses what shape to find the area of.
 * 
 */
  if(userChoice == 1)
  {
    cout << "Triangle Area: " << triresult << endl;
  }
  else if(userChoice == 2)
  {
    cout << "Rectangle Area: " << recresult << endl;
  }
  else if(userChoice == 3)
  {
    cout << "Circle Area: " << cresult << endl;
  }
  
  return 0;
}