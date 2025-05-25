// 13. Assume that a program contains the following declarations:
// char c = '\1';
// short s = 2;
// int i = -3;
// long m = 5;
// float f = 6.5f;
// double d = 7.5;

// Give the value and the type of each expression listed below.
// (a) c * i    (c) f / c       (e) f - d
// A: -3, int   A: 6.5, float    A: -1.0, double
// (b) s + m    (d) d / s       (f) (int) f
// A: 7, long   A: 3.75, double  A: 6, int

#include <stdio.h>

int main(void)
{
  char c = '\1';
  short s = 2;
  int i = -3;
  long m = 5;
  float f = 6.5f;
  double d = 7.5;

  printf("%d\n", c * i);
  printf("%ld\n", s + m);
  printf("%f\n", f / c);
  printf("%f\n", d / s);
  printf("%f\n", f - d);
  printf("%d\n", (int) f);

  return 0;
}

