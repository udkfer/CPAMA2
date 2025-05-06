// Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:
// Enter amount of loan: 20000.00
// Enter interest rate: 6.0
// Enter monthly payment: 386.66
// Balance remaining after first payment: $19713.34
// Balance remaining after second payment: $19425.25
// Balance remaining after third payment: $19135.71
// Display each balance with two digits after the decimal point. Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.

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
