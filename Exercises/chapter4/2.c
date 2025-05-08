// If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify your answer.
// A: Yes, the first because the quotient of a positive integer and a negative integer is negative, and the second because it first executes the i/j division then turns the result into negative, both equations results in the same negative number only differing in order it is obtained.

#include <stdio.h>

int main(void)
{
  int i = 5;
  int j = 3;


  printf("%d\n", (-i)/j);
  printf("%d\n", -(i/j));
}
