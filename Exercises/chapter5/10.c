// What output does the following program fragment produce? (Assume that i is an integer variable.)
// i = 1; 
// switch (i % 3) {
//   case 0: printf("zero");
//   case 1: printf("one");
//   case 2: printf("two");
// }
// A: onetwo

#include <stdio.h>

int main(void)
{
  int i;
  i = 1; 
  switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
  }
}

