// 11. Suppose that i is a variable of type int, f is a variable of type float, and d is a variable of type double. What is the type of the expression i * f / d?
// A: double, because i will be converted to float by the multiplication, then the result will be promoted to double by the division.

#include <stdio.h>

int main(void)
{
  int i;
  float f;
  double d;

  printf("%f", i * f / d);

  return 0;
}
