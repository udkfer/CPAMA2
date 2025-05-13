// Find the error in the following program fragment and fix it.
// if (n % 2 == 0);
//   printf("n is even\n");
//  A: semicolon at the end of the if expression makes the if statement empty, the fix is just remove it.

#include <stdio.h>

int main(void)
{
  int n = 4;
  if (n % 2 == 0)
    printf("n is even\n");

  return 0;
}
