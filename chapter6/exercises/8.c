// What output does the following for statement produce?
// for (i = 10; i >= 1; i /= 2)
//   printf("%d ", i++);
//  A: 10 5 3 2 1 1 1 1 1 1 1 1 ... endless

#include <stdio.h>

int main(void)
{
  for (int i = 10; i >= 1; i /= 2)
  {
    printf("%d ", i++);
  }

  return 0;
}
