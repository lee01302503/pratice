#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  int a, b;
  int i;
  int sum = 0;

  printf("intger number a, b : ");
  scanf("%d%d", &a, &b);
  
  for (i = a; i <= b; i++)
  {
	sum += i;
  }
  printf("%d", sum);
}