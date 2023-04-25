#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  system("cls");
  float num1, num2, result;

  printf("Enter two numbers: ");
  scanf("%f%f", &num1, &num2);

  result = num1 * num2;

  printf("Result: %.2f\n", result);

  return 0;
}