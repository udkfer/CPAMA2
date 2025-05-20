// Programming Project 9 in Chapter 5 asked you to write a program that determines which of two dates comes earlier on the calendar. Generalize the program so that the user may enter any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:
// Enter a date (mm/dd/yy): 3/6/08
// Enter a date (mm/dd/yy): 5/17/07
// Enter a date (mm/dd/yy): 6/3/07
// Enter a date (mm/dd/yy): 0/0/0
// 5/17/07 is the earliest date

#include <stdio.h>

int main(void)
{
  int m1 = 1, d1 = 1, y1 = 1;
  int m2 = 1, d2 = 1, y2 = 1;
  int conv1d, conv2d;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);

  for (;m1 != 0 && d1 != 0 && y1 != 0;)
  {

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (m2 == 0 && d2 == 0 && y2 == 0)
    {
      break;
    }

    conv1d = (((y1 * 12) + m1) * 30.417f) + d1;
    conv2d = (((y2 * 12) + m2) * 30.417f) + d2;

    if (conv2d < conv1d)
    {
      m1 = m2;
      d1 = d2;
      y1 = y2;
    }


  }

  printf("%d/%d/%d is the earliest date.\n", m1, d1, y1);

  return 0;
}
