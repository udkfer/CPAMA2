// 14. Does the following statement always compute the fractional part of f correctly (assuming that f and frac_part are float variables)?
// frac_part = f - (int) f;
// If not, what’s the problem?
// A: No, the statement will only compute correctly if the fractional part of f is 0, and if it now surpass the value of int.

#include <stdio.h>

int main(void)
{
  float f = 1 , frac_part;

  frac_part = f - (int) f;

  printf("%f\n", frac_part);

  return 0;
}
