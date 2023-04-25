#include <stdio.h>

int main(void) 
{
  int minutes, hours, remaining_minutes;

  printf("Enter the number of minutes: ");
  scanf("%d", &minutes);

  hours = minutes / 60;
  remaining_minutes = minutes % 60;

  printf("%d hours and %d minutes\n", hours, remaining_minutes);

  return 0;
}