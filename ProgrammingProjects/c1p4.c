// Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
// Enter an amount: 100.00
// With tax added: $105.00

#include <stdio.h>

int main(void)
{
  float money = 0.0;

  printf("Enter an amount: ");
  scanf("%f\n", &money);

  float tax =  money * 1.05;
  printf("With Tax added: ");
  printf("%.2f\n", tax);

  return 0;
}
