// Write a program that finds the largest in a series of numbers entered by the user.
// The program must prompt the user to enter numbers one by one. When the user enters 0 or a negative number, the program must display the largest nonnegative number entered:
// Enter a number: 60
// Enter a number: 38.3
// Enter a number: 4.89
// Enter a number: 100.62
// Enter a number: 75.2295
// Enter a number: 0
// The largest number entered was 100.62
// Notice th!at the numbers aren’t necessarily integers.

#include <stdio.h>

int main(void)
{

  for (;;)
  {
    float new, largest;

    printf("Enter a number: ");
    scanf("%f", &new);

    if (new == 0) {
      printf("The largest number entered was: %.2f\n", largest);
      return 0;
    } 
    else if (new >= largest)
    {
      largest = new;
    } 
  }
}
