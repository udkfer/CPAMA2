

// (a) i = 7; j = 8;
// i *= j + 1;
// printf("%d %d", i, j);
// A: 63 8

// (b) i = j = k = 1;
// i += j += k;
// printf("%d %d %d", i, j, k);
// A: 3 2 1

// (c) i = 1; j = 2; k = 3;
// i -= j -= k;
// printf("%d %d %d", i, j, k);
// A: 2 -1 3

// (d) i = 2; j = 1; k = 0;
// i *= j *= k;
// printf("%d %d %d", i, j, k);
// A: 0 0 0

#include <stdio.h>

int main(void)
{
  int i, j, k;

// (a)
  i = 7; j = 8;
  i *= j + 1;
  printf("(a): %d %d\n", i, j);

// (b)
i = j = k = 1;
i += j += k;
printf("(b): %d %d %d\n", i, j, k);

// (c)
i = 1; j = 2; k = 3;
i -= j -= k;
printf("(c): %d %d %d\n", i, j, k);

// (d)
i = 2; j = 1; k = 0;
i *= j *= k;
printf("(d): %d %d %d\n", i, j, k);

  return 0;
}
