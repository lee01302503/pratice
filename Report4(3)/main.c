#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  int a;
  int row;
  int i, j;

  printf("row, a : ");
  scanf("%d%d", &row, &a);

  for (i = 1; i <= row; i++)
  {
	for (j = 1; j <= a; j++)
	{
	  printf("*");
	}
	printf("\n");
  }

  return 0;
}