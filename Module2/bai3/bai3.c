#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
  system("cls");
  int a = 0;
  int b = 0;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  
  int distance1 = abs(100-a);
  int distance2 = abs(100-b);

  if (distance1>distance2) {
    printf("Result is %d", b);
  } else if (distance1<distance2){
    printf("Result is %d", a);
  } else {
    printf("Result is %d", a);
  }

  return 0;
}