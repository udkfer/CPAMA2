// 7. Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply, or divide two fractions (by entering either +, -, *, or / between the fractions).

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  char ch;

  printf("Enter two fractions separated by +, -, * or / sign: ");
  scanf("%d /%d ", &num1, &denom1);
  ch = getchar();
  scanf("%d /%d", &num2, &denom2);

  switch(ch)
  {
    case '+':
      result_num = num1 * denom2 + num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The sum is %d/%d\n", result_num, result_denom);
      break;
    case '-':
      result_num = num1 * denom2 - num2 * denom1;
      result_denom = denom1 * denom2;
      printf("The sub is %d/%d\n", result_num, result_denom);
      break;
    case '*':
      result_num = (num1 * denom2) * (num2 * denom1);
      result_denom = denom1 * denom2;
      printf("The mul is %d/%d\n", result_num, result_denom);
      break;
    case '/':
      result_num = (num1 * denom2) / (num2 * denom1);
      result_denom = denom1 * denom2;
      printf("The div is %d/%d\n", result_num, result_denom);
      break;
  }

  return 0;
}

