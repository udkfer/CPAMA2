// Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
// (a) while (i < 10) {…}
// (b) for (; i < 10;) {…}
// (c) do {…} while (i < 10);
// A: (c)

#include <stdio.h>

int main(void)
{
  int i = 11;

  printf("(a): ");
  while (i < 10)
  {
    printf("%d ", i);
  }

  printf("\n(b): ");
  for (; i < 10;)
  {
    printf("%d ", i);
  }

  printf("\n(c): ");
  do
  {
    printf("%d ", i);
  }
  while (i < 10);


  printf("\n");

  return 0;
}
