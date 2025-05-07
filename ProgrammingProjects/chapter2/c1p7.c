// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
// Enter a dollar amount: 93
// $20 bills: 4
// $10 bills: 1
//  $5 bills: 0
//  $1 bills: 3
//  Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use integer values throughout, not floating-point numbers.

#include <stdio.h>

int main(void)
{
  int x = 0;

  printf("Enter a dollar amount: ");
  scanf("%d\n", &x);

  printf("$20 bills: ");
  int bill20 = (x / 20);
  printf("%d\n", bill20);
  int leftover20 = (x - bill20 * 20);

  printf("$10 bills: ");
  int bill10 = (leftover20 / 10);
  printf("%d\n", bill10);
  int leftover10 = (leftover20 - bill10 * 10);



  printf("$5 bills: ");
  int bill5 = (leftover10 / 5);
  printf("%d\n", bill5);
  int leftover5 = (leftover10 - bill5 * 5);

  printf("$5 bills: ");
  int bill1 = (leftover5 / 1);
  printf("%d\n", bill1);
  int leftover1 = (leftover5 - bill1);

  return 0;
}
