// Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
// (a) for (i = 0; i < 10; i++) …
// (b) for (i = 0; i < 10; ++i) …
// (c) for (i = 0; i++ < 10; ) …
// A: (c).

#include <stdio.h>

int main(void)
{
  int i;

  printf("(a): ");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }

  printf("\n(b): ");
  for (i = 0; i < 10; ++i)
  {
    printf("%d ", i);
  }

  printf("\n(c): ");
  for (i = 0; i++ < 10; )
  {
    printf("%d ", i);
  }

  printf("\n");

  return 0;
}
