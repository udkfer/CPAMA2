//Write a program that declares several int and float variables without initializing them and then prints their values. Is there any pattern to the values? (Usually there isn’t.)
// A: The only partern that I see is the return of the integers and float are 0, but float ones have six digits after the period.

#include <stdio.h>

int one, two, three;
float um, dois, tres;

int main(void) {
 printf("%d %d %d %f %f %f\n", one, two, three, um, dois, tres);
 return 0;
}
