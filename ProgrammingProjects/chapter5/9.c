// Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:
// Enter first date (mm/dd/yy): 3/6/08
// Enter second date (mm/dd/yy): 5/17/07
// 5/17/07 is earlier than 3/6/08

#include <stdio.h>

int main(void)
{
  int m1, d1, y1, m2, d2, y2, compl1, comps1, compl2, comps2, largest, smallest;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  int conv1d = (((y1 * 12) + m1) * 30.417f) + d1;
  int conv2d = (((y2 * 12) + m2) * 30.417f) + d2;

  if(conv1d < conv2d) {
    printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
  } else {
    printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
  }

  return 0;
}
