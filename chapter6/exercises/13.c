// Rewrite the following loop so that its body is empty:
// for (n = 0; m > 0; n++)
//   m /= 2;

#include <stdio.h>

int main(void)
{
  int n, m;

  printf("Enter a number: ");
  scanf("%d", &m);

  for (n = 0; m > 0; n++, m /= 2)
    /*printf("%d\n", m)*/;

  return 0;
}
