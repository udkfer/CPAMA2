// Write a program that calculates how many digits a number contains:
// Enter a number: 374
// The number 374 has 3 digits
// You may assume that the number has no more than four digits. Hint: Use if statements to test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.

#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n >= 1 && n <= 9)
    printf("The number %d has 1 digit\n", n);
  else if (n >= 10 && n <= 99)
    printf("The number %d has 2 digits\n", n);
  else if (n >= 100 && n <= 999)
    printf("The number %d has 3 digits\n", n);
  else if (n >= 1000 && n <= 9999)
    printf("The number %d has 4 digits\n", n);
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
