#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  int a = 0;

  printf("%d", a);
  scanf("%d", &a);

  while (a < 10);
  {
	a = a * 2;
  }
  printf("a : %d", a);

  return 0;
}