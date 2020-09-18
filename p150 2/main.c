#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 0
/* made by Prof. Lee
*/
int main(void)
{
  int n;
  printf("Please input integer number : ");
  scanf("%d", &n);
  switch (n % 3)
  {
  case A:
	printf("False!");
	break;
  default:
	printf("Truth");
	break;
  }
  return 0;
}