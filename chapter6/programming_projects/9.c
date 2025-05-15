// Programming Project 8 in Chapter 2 asked you to write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments. Modify the program so that it also asks the user to enter the number of payments and then displays the balance remaining after each of these payments.

#include <stdio.h>

int main(void)
{
  float loan_amount = 0.0;
  float interest_rate = 0.0;
  float monthly_payment = 0.0;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  float first_tax_calculator = (interest_rate / 100 / 12 * loan_amount);
  float first_payment = (loan_amount + first_tax_calculator - monthly_payment);
  printf ( "First Month Payment: ");
  printf ( "%.2f\n", first_payment);

  float second_tax_calculator = (interest_rate / 100 / 12 * first_payment);
  float second_payment = (first_payment + second_tax_calculator - monthly_payment);
  printf ( "Second Month Payment: ");
  printf ( "%.2f\n", second_payment);

  float third_tax_calculator = (interest_rate / 100 / 12 * second_payment);
  float third_payment = (second_payment + third_tax_calculator - monthly_payment);
  printf ( "Third Month Payment: ");
  printf ( "%.2f\n", third_payment);

  return 0;
}
