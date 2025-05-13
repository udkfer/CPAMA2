// Translate the program fragment of Exercise 1 into a single for statement.

#include <stdio.h>

int main(void)
{
  int i = 1;
  printf("while:\t");
  while (i <= 128) {
    printf("%d ", i);
    i *= 2;
  }

  printf("\nfor:\t");
  for ( i = 1; i <= 128; i *= 2)
  {
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}

