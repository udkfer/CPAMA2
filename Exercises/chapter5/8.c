// The following if statement is unnecessarily complicated. Simplify it as much as possible.
// (Hint: The entire statement can be replaced by a single assignment.)
// if (age >= 13)
//   if (age <= 19)
//     teenager = true;
//   else
//     teenager = false;
// else if (age < 13)
//   teenager = false;

#include <stdio.h>

int main(void)
{

  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  int teenager = (age >= 13 && age <= 19);

  //Validating the statement
  switch(teenager) {
    case 1:
      printf("You're a teenager\n");
      break;
    case 0:
      printf("You're not a teenager\n");
      break;
  }

  return 0;
}
