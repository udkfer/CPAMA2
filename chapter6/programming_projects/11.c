// The value of the mathematical constant e can be expressed as an infinite series:
// e = 1 + 1/1! + 1/2! + 1/3! + …
// Write a program that approximates e by computing the value of
// 1 + 1/1! + 1/2! + 1/3! + … + 1/n!
// where n is an integer entered by the user.

#include <stdio.h>

int main (void)
{
  int n;
  int d = 1;
  float e = 1;

  printf("Enter an integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    e += 1.0f / (d *= i);
  }
  printf("Approximate value of e: %f\n", e);

  return 0;
}
