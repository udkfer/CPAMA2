/*
What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.) 
(a) 8 / 5
  A: 1
(b) -8 / 5
  A: -1
(c) 8 / -5
  A: -1
(d) -8 / -5
  A: 1
*/


#include <stdio.h>

int main(void)
{
  int i = 8;
  int j = 5;

  printf("(a): %d\n", (i / j));
  printf("(b): %d\n", (-i / j));
  printf("(c): %d\n", (i / -j));
  printf("(d): %d\n", (-i / -j));

  return 0;
}
