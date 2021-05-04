/**
 * @file menu.cpp
 * @author your name (you@domain.com)
 * @brief Outputs menu and allows user to choose shape.
 * @version 0.1
 * @date 2021-05-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "menu.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

Triangle triangle;
Rectangle rectangle;
Circle circle;
Menu menu;
/**
 * @brief Prints out a menu to the console.
 * 
 */
void Menu::areaMenu(){
cout << "***SHAPE AREAS***" << endl;
cout << "1. Area of a Triangle" << endl;
cout << "2. Area of a Rectangle" << endl;
cout << "3. Area of a Circle" << endl;
cout << "0. EXIT" << endl;
cout << "Please enter your choice: " << endl;
cin >> userChoice;
}

/**
 * @brief Allows user to choose shape.
 * 
 * @return int - Returns the int of the user choice (1, 2, 3).
 */
int Menu::choice()
{

do{
    switch(userChoice){

      case 1:
        triangle.triarea(4, 5);
      break;

      case 2:
        rectangle.recarea(4, 5);
      break;

      case 3:
        circle.cirarea(5);
      break;

      case 0:
      break;

      default:
      cout << "Please enter a valid choice!" << endl;
      break;
    }

  }

  while(userChoice != 0);
  return userChoice;
 
}

/* cout << "***SHAPE AREAS***" << endl;
cout << "1. Area of a Triangle" << endl;
cout << "2. Area of a Rectangle" << endl;
cout << "3. Area of a Circle" << endl;
cout << "0. EXIT" << endl;
cout << "Please enter your choice: " << endl;
cin >> userChoice;*/
