// Translate the for statement of Exercise 8 into an equivalent while statement. You will need one statement in addition to the while loop itself.

#include <stdio.h>

int main(void)
{

  printf("for:\t");
  for (int i = 10; i >= 1; i /= 2)
  {
    printf("%d ", i++);
  }

  printf("\nwhile:\t");

  int i = 10;
  while(i >= 1)
  {
    printf("%d ", i++);
    i /= 2;
  }
  printf("\n");

  return 0;
}
