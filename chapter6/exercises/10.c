// Show how to replace a continue statement by an equivalent goto statement.

#include <stdio.h>

int main(void)
{
  int i;
  int n = 0;
  int sum = 0;

  while (n < 10) {
    scanf("%d", &i);
    if (i == 0)
      continue;
    sum += i;
    n++;
    /* continue jumps to here */
  }


  while (n < 10) {
    scanf("%d", &i);
    if (i == 0)
      goto end;
    sum += i;
    n++;
    /* continue jumps to here */
end:;
  }
  return 0;
}
