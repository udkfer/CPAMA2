// Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.
// (a) i = 1;
// printf("%d ", i++ - 1);
// printf("%d", i);
// A: 0 and 2

// (b) i = 10; j = 5;
// printf("%d ", i++ - ++j);
// printf("%d %d", i, j);
// A: 4 and 11 6

// (c) i = 7; j = 8;
// printf("%d ", i++ - --j);
// printf("%d %d", i, j);
// A: 0 and 8 7

// (d) i = 3; j = 4; k = 5;
// printf("%d ", i++ - j++ + --k);
// printf("%d %d %d", i, j, k);
// A: 3 and 4 5 4

#include <stdio.h>

int main(void)
{
  int i, j, k;

  // (a) 
  i = 1;
  printf("(a): %d \n", i++ - 1);
  printf("(a): %d\n", i);

  // (b)
  i = 10; j = 5;
  printf("(b): %d \n", i++ - ++j);
  printf("(b): %d %d\n", i, j);

  // (c)
  i = 7; j = 8;
  printf("(c): %d \n", i++ - --j);
  printf("(c): %d %d\n", i, j);

  // (d)
  i = 3; j = 4; k = 5;
  printf("(d): %d \n", i++ - j++ + --k);
  printf("(d): %d %d %d\n", i, j, k);

  return 0;
}
