// What output does the following program fragment produce?
// i = 9384;
// do {
//   printf("%d ", i);
//   i /= 10;
// } while (i > 0);
// A: 9384 938 93 9 

#include <stdio.h>

int main(void)
{
  int i = 9384;
  do {
    printf("%d ", i);
    i /= 10;
  } while (i > 0);

  return 0;
}

