/*
Repeat Exercise 5 for C99.
(a) 8 % 5
  A: 3
(b) -8 % 5
  A: -3
(c) 8 % -5
  A: 3
(d) -8 % -5
  A: -3
*/


#include <stdio.h>

int main(void)
{
  int i = 8;
  int j = 5;

  printf("(a): %d\n", (i % j));
  printf("(b): %d\n", (-i % j));
  printf("(c): %d\n", (i % -j));
  printf("(d): %d\n", (-i % -j));

  return 0;
}



