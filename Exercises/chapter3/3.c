// For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If they’re not, show how they can be distinguished.
// (a) "%d"        versus " %d"
// A: Equivalent, ignores the first space.

// (b) "%d-%d-%d"  versus "%d -%d -%d"
// A: Equivalent, no need to the user to input the spaces to get the same result.

// (c) "%f"        versus "%f "
// A: Different, will require the user to input a blank character.

// (d) "%f,%f"     versus "%f, %f"
// A: Equivalent, same sitation as (b).

#include <stdio.h>

int main(void)
{
  int x = 0;
  float y = 0;

  // (a)
  scanf("%d", &x);
  printf("%d\n", x);

  scanf(" %d", &x);
  printf("%d\n", x);

  // (b)
  scanf("%d-%d-%d", &x, &x, &x);
  printf("%d-%d-%d\n", x, x, x);

  scanf("%d -%d -%d", &x, &x, &x);
  printf("%d-%d-%d\n", x, x, x);

  // (c)
  scanf("%f", &y);
  printf("%f\n", y);

  scanf("%f ", &y);
  printf("%f\n", y);

  // (d)
  scanf("%f,%f", &y, &y);
  printf("%f,%f\n", y, y);

  scanf("%f, %f", &y, &y);
  printf("%f,%f\n", y, y);

  return 0;
}
