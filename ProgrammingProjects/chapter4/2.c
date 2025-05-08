// Extend the program in Programming Project 1 to handle three-digit numbers.;

#include <stdio.h>

int main(void)
{
  int i;

  printf("Enter a two-digit number: ");
  scanf("%d", &i);
  printf("The reversal is: %d%d%d\n", i % 10, (i / 10) % 10 , i / 100);

  // int i, j, k;
  // scanf("%1d%1d%1d", &i, &j, %k);
  // printf("%d%d%d\n", k, j, i);

  return 0;
}

