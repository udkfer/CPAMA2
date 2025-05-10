// The following program fragments illustrate the relational and equality operators. Show the output produced by each, assuming that i, j, and k are int variables.
// (a) i = 2; j = 3;
// k = i * j == 6;
// printf("%d", k);
// A: 1

// (b) i = 5; j = 10; k = 1;
// printf("%d", k > i < j);
// A: 1

// (c) i = 3; j = 2; k = 1;
// printf("%d", i < j == j < k);
// A: 1

// (d) i = 3; j = 4; k = 5;
// printf("%d", i % j + i < k);
// A: 0


#include <stdio.h>

int main(void)
{
  int i, j, k;


// (a)
i = 2; j = 3;
k = i * j == 6;
printf("(a): %d\n", k);

// (b)
i = 5; j = 10; k = 1;
printf("(b): %d\n", k > i < j);

// (c)
i = 3; j = 2; k = 1;
printf("(c): %d\n", i < j == j < k);

// (d)
i = 3; j = 4; k = 5;
printf("(d): %d\n", i % j + i < k);

  return 0;
}
