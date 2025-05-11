// Write a program that finds the largest and smallest of four integers entered by the user:
// Enter four integers: 21 43 10 35
// Largest: 43
// Smallest: 10
// Use as few if statements as possible. Hint: Four if statements are sufficient.

#include <stdio.h>

int main(void)
{
  int i1, i2, i3, i4, compl1, comps1, compl2, comps2, largest, smallest;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  if(i1 > i2) {
    compl1 = i1;
    comps1 = i2;
  } else {
    compl1 = i2;
    comps1 = i1;
  }

  if(i3 > i4) {
    compl2 = i3;
    comps2 = i4;
  } else {
    compl2 = i4;
    comps2 = i3;
  }

  if(compl1 > compl2) {
    largest = compl1;
  } else {
    largest = compl2;
  }

  if(comps1 < comps2) {
    smallest = comps1;
  } else {
    smallest = comps2;
  }

  printf("Largest: %d\nSmallest: %d\n", largest, smallest);

  return 0;
}
