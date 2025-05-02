// Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself twice to compute r3.

#include <stdio.h>

int main(void)
{
  int radius = 10;
  float pi = 3.14159265359;
  float volume =  (4.0f / 3.0f) * pi * radius * radius * radius;
  printf("%f\n", volume);
  return 0;
}
