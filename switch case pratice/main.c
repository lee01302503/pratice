#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define reminder 0
/* made by Prof. Lee
*/
int main(void)
{
  int n;
  printf("intger number : ");
  scanf("%d", &n);
  switch (n % 3)
  {
  case reminder:
	printf("faluse!!");
	break;
  default:
	printf("True!!!");
	break;
  }
  return 0;
}