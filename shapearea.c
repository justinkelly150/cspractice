//Author: Justin Kelly
//Date: 12/12/2020
//Area Calculator of Different Shapes

#include <stdio.h>

int getMenuChoice();
double triangleArea(int, int);
int rectangleArea(int, int);
double circleArea(int);

int main(){

  int menuChoice, rectangle, height, base, length, width, radius;
  double triangle, circle;


  do
  {
    menuChoice = getMenuChoice();

    switch(menuChoice){

      case 1:
      triangle = triangleArea(height, base);
      break;

      case 2:
      rectangle = rectangleArea(length, width);
      break;

      case 3:
      circle = circleArea(radius);
      break;

      case 0:
      break;

      default:
      printf("Please enter a valid choice!\n");
      break;
    }

  }

  while(menuChoice != 0);


  return 0;
}

int getMenuChoice(){

  int menuChoice;

  printf("***SHAPE AREAS***\n");
  printf("1. Area of a Triangle\n");
  printf("2. Area of a Rectangle\n");
  printf("3. Area of a Circle\n");
  printf("0. EXIT\n");
  printf("Please enter your choice:\n");
  scanf("%d", &menuChoice);

  return menuChoice;
}

double triangleArea(int height, int base){

  double area;

  printf("Please enter a base for your triangle: ");
  scanf("%d", &base);

  printf("Please enter a height for your triangle: ");
  scanf("%d", &height);

  area = height * base * .5;

  printf("Your triangle's area is %.2lf.\n", area);

  return area;
}

int rectangleArea(int length, int width){

  int area;

  printf("Please enter your rectangle's length: ");
  scanf("%d", &length);

  printf("Please enter your rectangle's width: ");
  scanf("%d", &width);

  area = length * width;

  printf("Your rectangle's area is %d.\n", area);

  return area;
}

double circleArea(int radius){

  double area;

  printf("Please enter your circle's radius: \n");
  scanf("%d", &radius);

  area = 3.14 * radius * radius;

  printf("Your circle's area is %.2lf.\n", area);

  return area;
}
