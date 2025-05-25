// 9. Suppose that i and j are variables of type int. What is the type of the expression i / j + 'a'?
// A: int because 'a' will be converted to int as well.

#include <stdio.h>

int main(void)
{
  int i = 1,
      j = 1;

  printf("%d\n", i / j + 'a');

  return 0;
}
