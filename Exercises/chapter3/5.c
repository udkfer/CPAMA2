// Suppose that we call scanf as follows:
// scanf("%f%d%f", &x, &i, &y);
// If the user enters:
// 12.3 45.6 789 
// What will be the values of x, i, and y after the call? (Assume that x and y are float variables and i is an int variable.)
// A: x=12.300000 i=45 y=0.600000

#include <stdio.h>

int main(void)
{
  int i = 0;
  float x, y = 0;

  scanf("%f%d%f", &x, &i, &y);
  printf("x = %f\ni = %d\ny = %f\n", x, i, y);

  return 0;
}

