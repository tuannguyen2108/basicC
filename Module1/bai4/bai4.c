#include <stdio.h>

int main(void) 
{
  int hours, minutes, total_minutes;

  printf("Enter the number of hours and minutes: ");
  scanf("%d%d", &hours, &minutes);

  total_minutes = hours * 60 + minutes;

  printf("Total minutes: %d\n", total_minutes);

  return 0;
}