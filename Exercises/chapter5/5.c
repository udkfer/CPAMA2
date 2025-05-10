// Is the following if statement legal?
// if (n >= 1 <= 10)
//   printf("n is between 1 and 10\n"); 
// If so, what does it do when n is equal to 0?
// A: Yes the "if" statement is legal, and if n = 0, the "if" statement execute the expression still.

#include <stdio.h>

int main(void)
{

  int n;

  if (n >= 1 <= 10)
  {
    printf("n is between 1 and 10\n"); 
  }

  n = 0;
  if (n >= 1 <= 10)
  {
    printf("n is between 1 and 10\n"); 
  }

  return 0;
}
