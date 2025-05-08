// Show the output produced by each of the following program fragments. Assume that i and j are int variables.

// (a) i = 6;
// j = i += i;
// printf("%d %d", i, j);
// A: 12 12

// (b) i = 5;
// j = (i -= 2) + 1;
// printf("%d %d", i, j);
// A: 3 4

// (c) i = 7;
// j = 6 + (i = 2.5);
// printf("%d %d", i, j);
// A: 2 8

// (d) i = 2; j = 8;
// j = (i = 6) + (j = 3);
// printf("%d %d", i, j);
// A: 6 9

#include <stdio.h>

int main(void)
{
  int i, j;

  // (a)
  i = 6;
  j = i += i;
  printf("(a): %d %d\n", i, j);

  // (b) 
  i = 5;
  j = (i -= 2) + 1;
  printf("(b): %d %d\n", i, j);

  // (c)
  i = 7;
  j = 6 + (i = 2.5);
  printf("(c): %d %d\n", i, j);

  // (d)
  i = 2; j = 8;
  j = (i = 6) + (j = 3);
  printf("(d): %d %d\n", i, j);

  return 0;
}
