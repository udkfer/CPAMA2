// Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:
// Enter a 24-hour time: 21:11
// Equivalent 12-hour time: 9:11 PM
// Be careful not to display 12:00 as 0:00.

#include <stdio.h>

int main(void)
{
  int h, m;

  printf("Enter a 24-hour time(h:m): ");
  scanf("%d:%d", &h, &m);

  if (h <= 12)
    printf("Equivalent 12-hour time: %.2d:%.2d AM\n", h, m);
  else if (h >= 12) {
    h = h - 12;
    printf("Equivalent 12-hour time: %.2d:%.2d PM\n", h, m);
  }
  else
    printf("Invalid input\n");


  // switch(n)
  // {
  //   case 1 ... 9:
  //     printf("The number %d has 1 digit\n", n);
  //     break;
  //   case 10 ... 99:
  //     printf("The number %d has 2 digits\n", n);
  //     break;
  //   case 100 ... 999:
  //     printf("The number %d has 3 digits\n", n);
  //     break;
  //   case 1000 ... 9999:
  //     printf("The number %d has 4 digits\n", n);
  //     break;
  // }

  return 0;
}

