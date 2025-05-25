// 10. Suppose that i is a variable of type int, j is a variable of type long, and k is a variable of type unsigned int. What is the type of the expression i + (int) j * k?
// A: unsigned int, because i and j are ints(j because of the cast), then k converts the whole expression to unsigned int.

#include <stdio.h>

int main(void)
{
  int i;
  long j;
  unsigned int k;

  printf("%d", i + (int) j * k);

  return 0;
}


