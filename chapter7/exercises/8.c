// 8. Repeat Exercise 7, but give the equivalent hexadecimal escape.

// (a) \b
// A: 0x08
// (b) \n
// A: 0x0a
// (c) \r
// A: 0x0d
// (d) \t
// A: 0x09

#include <stdio.h>

int main(void)
{

  char a = 0x08;
  char b = 0xa;
  char c = 0xd;
  char d = 0x09;

  printf(" %c", a);
  putchar(b);
  putchar(c);
  printf("123");
  putchar(d);
  printf("123");
  putchar('\n');

  return 0;
}
