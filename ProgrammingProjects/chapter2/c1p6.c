// Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:
// ((((3x + 2)x – 5)x – 1)x + 7)x – 6
// Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as Horner’s Rule.

#include <stdio.h>

int main(void)
{
  int x = 1;

  printf("Enter the value of x: ");
  scanf("%d\n", &x);

  int polynomial = ((((3 * x + 2)* x - 5) * x - 1) * x + 7) * x - 6;
  printf("Polynomial Value: ");
  printf("%d\n", polynomial);

  return 0;
}
