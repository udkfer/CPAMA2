
// (a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade.
// (b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Display the rival’s commission as well as the commission charged by the original broker.


#include <stdio.h>

int main(void)
{

  float no_shares;
  printf("Enter the number of shares: ");
  scanf("%f", &no_shares);

  float pp_share;
  printf("Enter the price per shares: ");
  scanf("%f", &pp_share);

  float o_commission;
  float o_value = no_shares * pp_share;

  if (o_value < 2500.00f)
    o_commission = 30.00f + .017f * o_value;
  else if (o_value >= 2500.00f && o_value < 6250.00f)
    o_commission = 56.00f + .0066f * o_value;
  else if (o_value >= 6250.00f && o_value < 20000.00f)
    o_commission = 76.00f + .0034f * o_value;
  else if (o_value >= 20000.00f && o_value < 50000.00f)
    o_commission = 100.00f + .0022f * o_value;
  else if (o_value >= 50000.00f && o_value < 500000.00f)
    o_commission = 155.00f + .0011f * o_value;
  else if (o_value >= 500000.00f)
    o_commission = 255.00f + .0009f * o_value;

  if (o_commission < 39.00f)
    o_commission = 39.00f;

  printf("The original commission is: $%.2f\n", o_commission);

  float r_commission;

  if (no_shares <= 2000){
    r_commission = 33.00f + .03 * no_shares;
  }
  else if (no_shares >= 2000){
    r_commission = 33.00f + .02 * no_shares;
  }
  printf("The rival commission is: $%.2f\n", r_commission);


  return 0;
}
