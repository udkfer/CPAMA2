// 8. Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12hour clock. The input will have the form hours:minutes followed by either A, P, AM, or PM (either lower-case or upper-case). White space is allowed (but not required) between the numerical time and the AM/PM indicator.
// Examples of valid input:
// 1:15P
// 1:15PM
// 1:15p
// 1:15pm
// 1:15 P
// 1:15 PM
// 1:15 p
// 1:15 pm
// You may assume that the input has one of these forms; there is no need to test for errors.


#include <stdio.h>

int main(void)
{
  int h, m;

  printf("Enter a 24-hour time(h:m): ");
  scanf("%d:%d", &h, &m);

  int minutes = (h * 60) + m;

  if (minutes <= 480 + (583 - 480) / 2)
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
  else if (minutes <= 583 + (679 - 583) / 2)
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
  else if (minutes <= 679 + (767 - 679) / 2)
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
  else if (minutes <= 767 + (767 - 840) / 2)
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
  else if (minutes <= 840 + (840 - 945) / 2)
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
  else if (minutes <= 945 + (945 - 1140) / 2)
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
  else if (minutes <= 1140 + (1140 - 1305) / 2)
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
  else
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

  return 0;
}

