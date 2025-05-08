// Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed. A session with the program should have the following appearance:
// Enter a two-digit number: 28
// The reversal is: 82
// Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10 is the last digit in n and n / 10 is n with the last digit removed.

#include <stdio.h>

int main(void)
{
  int i;

  printf("Enter a two-digit number: ");
  scanf("%d", &i);
  printf("The reversal is: %d%d\n", i % 10, i / 10);

  // int i, j;
  // scanf("%d%d", &i, &j);
  // printf("%d%d\n", j, i);

  return 0;
}
