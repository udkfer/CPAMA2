// Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd:
// Enter a date (mm/dd/yyyy): 2/17/2011
// You entered the date 20110217

#include <stdio.h>

int main(void)
{
  int m, d, y = 0;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);
  printf("%.4d%.2d%.2d\n", y, m, d);

  return 0;
}
