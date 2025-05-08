// Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits. Hint: See the upc.c program of Section 4.1.

#include <stdio.h>

int main(void)
{
  // int i;

  // printf("Enter a two-digit number: ");
  // scanf("%d", &i);
  // printf("The reversal is: %d%d%d\n", i % 10, (i / 10) % 10 , i / 100);

  int i, j, k;

  printf("Enter a two-digit number: ");
  scanf("%1d%1d%1d", &i, &j, &k);
  printf("The reversal is: %d%d%d\n", k, j, i);

  return 0;
}

