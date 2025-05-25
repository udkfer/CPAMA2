// 12. Suppose that i is a variable of type int, f is a variable of type float, and d is a variable of type double. Explain what conversions take place during the execution of the following statement: 
// d = i + f;
// A: double type, because the result of i + f will be a float the value will be converted to double to be stored into d.

#include <stdio.h>

int main(void)
{
  int i;
  float f;
  double d;

  d = i + f;

  printf("%f", d);

  return 0;
}
