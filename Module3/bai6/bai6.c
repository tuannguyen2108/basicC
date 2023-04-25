#include <stdio.h>
#include <stdlib.h>

int pascal(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  } else {
    return pascal(n-1, k) + pascal(n-1, k-1);
  }
}

int main() 
{
  system("cls");
  int rows;

  printf("Enter value of n: ");
  scanf("%d", &rows);
  //rows++;
  for (int i = 0; i <= rows; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", pascal(i, j));
    }
    printf("\n");
  }

  return 0;
}



