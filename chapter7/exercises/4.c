// 4. If c is a variable of type char, which one of the following statements is illegal?
// (a) i += c;  /* i has type int */
// (b) c = 2 * c - 1;
// (c) putchar(c);
// (d) printf(c);

// A: (d) is ilegal bacause it is not a string literal.

#include <stdio.h>

int main(void)
{
  char c;
  int i;

i += c;  /* i has type int */
c = 2 * c - 1;
putchar(c);
printf(c);

  return 0;
}
