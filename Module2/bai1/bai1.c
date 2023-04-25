#include <stdio.h>
#include <stdlib.h>

int main() 
{
  system("cls");
  int height = 0; 
  int width = 0; 
  int perimeter; 
  int area;

  printf("Input the height of the Rectangle: ");
  scanf("%d", &height);
  printf("Input the width of the Rectangle: ");
  scanf("%d", &width);

  perimeter = (height + width)*2;
  area = height * width;

  printf("Perimeter of the rectangle = %d inches \n",perimeter);
  printf("Area of the rectangle = %d square inches \n",area);
  
  return 0;
}