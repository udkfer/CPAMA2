// Translate the program fragment of Exercise 2 into a single for statement.

#include <stdio.h>


#include <stdio.h>

int main(void)
{
  int i = 9384;

  printf("do:\t");
  do {
    printf("%d ", i);
    i /= 10;
  } while (i > 0);


  printf("\nfor:\t");
  for ( i = 9384; i > 0; i /= 10)
  {
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}
