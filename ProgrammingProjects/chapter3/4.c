// Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxx and then displays the number in the form xxx.xxx.xxx:
// Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
// You entered 404.817.6900

#include <stdio.h>

int main(void)
{
  int ddd, x, y;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d -%d", &ddd, &x, &y);
  printf("You entered: %d.%d.%d\n", ddd, x, y);

  return 0;
}
