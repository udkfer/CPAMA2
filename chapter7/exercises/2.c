// 2. Which of the following are not legal constants in C? Classify each legal constant as either integer or floating-point.
// (a) 010E2
// (b) 32.1E+5
// (c) 0790
// (d) 100_000
// (e) 3.978e-2

//  A: (c) is ilegal because of the invalid '9' in octal constant, and (b) are ilegal as well because of the underline in the middle of the number;

#include <stdio.h>

int main(void)
{
  int a = 010E2;
  float b = 32.1E+5l;

  int c = 0790;
  int d = 100_000;

  double e = 3.978e-2;

  return 0;
}
