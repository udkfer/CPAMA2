// Programming Project 8 in Chapter 2 asked you to write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments. Modify the program so that it also asks the user to enter the number of payments and then displays the balance remaining after each of these payments.

#include <stdio.h>

int main(void)
{
  float loan_amount = 0.0;
  float interest_rate = 0.0;
  float monthly_payment = 0.0;
  int number_months = 0;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  printf("Enter the number months: ");
  scanf("%d", &number_months);

  // float tax_calculator = (interest_rate / 100 / 12 * loan_amount);
  // float payment = (loan_amount + tax_calculator - monthly_payment);

  for(int i = 1; i <= number_months; i++)
  {
    float tax_calculator = (interest_rate / 100 / 12 * loan_amount);
    loan_amount = (loan_amount + tax_calculator - monthly_payment);
    printf ( "Month %d Balance: %.2f", i, loan_amount);
    printf ( "\n");

  }

  return 0;
}
