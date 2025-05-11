// Here’s a simplified version of the Beaufort scale, which is used to estimate wind force:
//Speed (knots) 	Description
// Less than 1  	Calm
// 1-3          	Light air
// 4-27         	Breeze
// 28-47        	Gale
// 48-63        	Storm
// Above 63     	Hurricane
// Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description.

#include <stdio.h>

int main(void)
{
  int w_speed, description;
  printf("Enter the wind speed(knots): ");
  scanf("%d", &w_speed);

  if( w_speed >= 1 && w_speed <= 3)
    printf("Calm\n");
  else if( w_speed >= 1 && w_speed <= 3)
    printf("Light air\n");
  else if( w_speed >= 4 && w_speed <= 27)
    printf("Breeze\n");
  else if( w_speed >= 28 && w_speed <= 47)
    printf("Gale\n");
  else if( w_speed >= 48 && w_speed <= 63)
    printf("Storm\n");
  else if( w_speed > 63)
    printf("Hurricane\n");
  else
    printf("Invalid input\n");
  return 0;
}
