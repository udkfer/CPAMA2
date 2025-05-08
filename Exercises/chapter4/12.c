// Show the output produced by each of the following program fragments. Assume that i and j are int variables.

// (a) i = 5;
// j = ++i * 3 - 2;
// printf("%d %d", i, j);
// A: 6 16

// (b) i = 5;
// j = 3 - 2 * i++;
// printf("%d %d", i, j);
// A: 6 -7

// (c) i = 7;
// j = 3 * i-- + 2;
// printf("%d %d", i, j);
// A: 6 23

// (d) i = 7;
// j = 3 + --i * 2;
// printf("%d %d", i, j);
// A: 6 15

#include <stdio.h>

int main(void)
{

  int i, j;

// (a)
  i = 5;
  j = ++i * 3 - 2;
  printf("(a): %d %d\n", i, j);

// (a)
  i = 5;
  j = 3 - 2 * i++;
  printf("(b): %d %d\n", i, j);

// (c)
  i = 7;
  j = 3 * i-- + 2;
  printf("(c): %d %d\n", i, j);

// (d)
  i = 7;
  j = 3 + --i * 2;
  printf("(d): %d %d\n", i, j);

  return 0;
}
