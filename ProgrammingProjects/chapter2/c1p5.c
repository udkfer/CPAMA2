// Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
// 3x5 + 2x4 – 5x3 – x2 + 7x – 6
// Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply x by itself repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.)

#include <stdio.h>

int main(void)
{
  int x = 1;

  printf("Enter the value of x: ");
  scanf("%d\n", &x);

  int polynomial  =  (3 * (x * (x * x * x * x))) + (2 * (x * (x * x * x))) - (5 * (x * (x * x))) - (x * x) + (7 * x) - 6;
  printf("Polynomial Value: ");
  printf("%d\n", polynomial);

  return 0;
}
