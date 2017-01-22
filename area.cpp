#include<stdio.h>
int main()
{
  const int SIDE = 100;
  int area;
  area = SIDE*SIDE;
  printf("The area of the square with side: %d is: %d sq. units"
  , SIDE, area);
}