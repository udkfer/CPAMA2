// Modify Programming Project 11 so that the program continues adding terms until the current term becomes less than ε, where ε is a small (floating-point) number entered by the user.

#include <stdio.h>

int main (void)
{
  int n;
  int d = 1;
  float ε;
  float e = 1, t = 1;

  printf("Enter a float: ");
  scanf("%f", &ε);

  for (int i = 1; t >= ε; i++) {
    t = 1.0f / (d *= i);
    e += t;
  }
  printf("Approximate value of e: %f\n", e);

  return 0;
}
