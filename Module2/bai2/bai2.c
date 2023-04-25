#include <stdio.h>
#include <stdlib.h>

int main() 
{
  system("cls");
  int n = 0; 
  int i = 0;
  float S = 0;

  printf("Value of n : ");
  scanf("%d", &n);
  
  if (n==0) {
    return 0;
  } else {
      for (i=1;i<=n;i++) {
          S = S + (1.0/i);
      }
  }
  printf("Value of S = %.3f\n", S);
  
  return 0;
}