// What output does the following for statement produce?
// for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
//   printf("%d ", i);
// A: 5 4 3 2 

#include <stdio.h>

int main(void)
{
  int i, j;
  for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);

  return 0;
}
