// Are the following if statements equivalent? If not, why not?

// if (score >= 90)
//     printf("A");
// else if (score >= 80)
//     printf("B");
// else if (score >= 70)
//     printf("C");
// else if (score >= 60)
//     printf("D")
// else
//     printf("F");

// if (score < 60)
//     printf("F");
// else if (score < 70)
//     printf("D");
// else if (score < 80)
//     printf("C");
// else if (score < 90)
//     printf("B");
// else
//     printf("A");

// A: The if statements are equivalent.

#include <stdio.h>

int main(void)
{
  int score;

  printf("Enter your score grade: ");
  scanf("%d", &score);

  if (score >= 90)
    printf("A\n");
  else if (score >= 80)
    printf("B\n");
  else if (score >= 70)
    printf("C\n");
  else if (score >= 60)
    printf("D\n");
  else
    printf("F\n");

  if (score < 60)
    printf("F\n");
  else if (score < 70)
    printf("D\n");
  else if (score < 80)
    printf("C\n");
  else if (score < 90)
    printf("B\n");
  else
    printf("A\n");
}
