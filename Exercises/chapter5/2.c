// The following program fragments illustrate the logical operators. Show the output produced by each, assuming that i, j, and k are int variables.
// (a) i = 10; j = 5;
// printf("%d", !i < j);
// A: 1

// (b) i = 2; j = 1;
// printf("%d", !!i + !j);
// A: 1

// (c) i = 5; j = 0; k = -5;
// printf("%d", i && j || k);
// A: 1

// (d) i = 1; j = 2; k = 3;
// printf("%d", i < j || k);
// A: 1


#include <stdio.h>

int main(void)
{

  int i, j, k;

// (a) 
i = 10; j = 5;
printf("(a): %d\n", !i < j);

// (b) 
i = 2; j = 1;
printf("(b): %d\n", !!i + !j);

// (c) 
i = 5; j = 0; k = -5;
printf("(c): %d\n", i && j || k);

// (d) 
i = 1; j = 2; k = 3;
printf("(d): %d\n", i < j || k);

  return 0;
}
