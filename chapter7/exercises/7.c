// 7. For each of the following character escapes, give the equivalent octal escape. (Assume that the character set is ASCII.) You may wish to consult Appendix E, which lists the numerical codes for ASCII characters.
// (a) \b
// A: \10
// (b) \n
// A: \12
// (c) \r
// A: \15
// (d) \t
// A: \11

#include <stdio.h>

int main(void)
{

  char a = 010;
  char b = 012;
  char c = 015;
  char d = 011;

  printf(" %c", a);
  putchar(b);
  putchar(c);
  printf("123");
  putchar(d);
  printf("123");
  putchar('\n');

  return 0;
}
