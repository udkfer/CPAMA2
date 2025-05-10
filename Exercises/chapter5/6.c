// Is the following if statement legal?
// if (n == 1-10)
//   printf("n is between 1 and 10\n"); 
// If so, what does it do when n is equal to 5?
// A: The if statement is legal, but it never executes it becaus it is always 0, in both situations n isnt equal to -9.

#include <stdio.h>

int main(void)
{

  int n;

  if (n == 1-10)
  {
    printf("n is between 1 and 10\n"); 
  }

  n = 5;
  if (n == 1-10)
  {
    printf("n is between 1 and 10\n"); 
  }

  return 0;
}
