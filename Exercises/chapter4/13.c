// Only one of the expressions ++i and i++ is exactly the same as (i += 1); which is it? Justify your answer.
// A: ++i, Because it changes the value of "i" immediately instead of waiting until the next execution.

#include <stdio.h>

int main (void)
{
  int i = 0;
  int j = 0;
  int k = 0;

  k += 1;

  printf("%d %d %d\n", ++i, j++, k);

  return 0;
}
