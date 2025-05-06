// Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.

#include <stdio.h>

int main(void)
{
  int radius = 0;
  scanf("%d\n", &radius);
  float pi = 3.14159265359;
  float volume =  (4.0f / 3.0f) * pi * radius * radius * radius;
  printf("%f\n", volume);
  return 0;
}
