// What does the following statement print if i has the value 17? What does it print if i has the value –17?
// printf("%d\n", i >= 0 ? i : -i);
// A: In both situations, the statement prints 17.

#include <stdio.h>

int main(void)
{

  int i;

  i = 17;
  printf("%d\n", i >= 0 ? i : -i);

  i = -17;
  printf("%d\n", i >= 0 ? i : -i);

  return 0;
}
