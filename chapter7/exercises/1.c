// 1. Give the decimal value of each of the following integer constants.
// (a) 077
// A: 63
// (b) 0x77
// A: 119
// (c) 0XABC
// A: 2748

#include <stdio.h>

int main(void)
{
  int a = 077;
  int b = 0x77;
  int c = 0XABC;

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);

  return 0;

}
