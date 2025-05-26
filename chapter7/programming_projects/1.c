// 1. The square2.c program of Section 6.3 will fail (usually by printing strange answers) if i * i exceeds the maximum int value. Run the program and determine the smallest value of n that causes failure. Try changing the type of i to short and running the program again. (Don’t forget to update the conversion specifications in the call of printf!) Then try long. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?
// A: Int: 2146192708, Short: 32767, Long: 9223372036854775807

#include <limits.h>
#include <stdio.h>

int main(void)
{

  // int n, i;
  int n;
  // short i;
  long i;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);


  for (i = 1; i <= n && i > 0; i++)
    printf("%10ld\t%10ld\n", i, i * i);

  return 0;
}
