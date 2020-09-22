#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  int a,b;
  printf("intger nuber : ");
  scanf("%d%d", &a, &b);
  if ((a > 0))
  {
	if ((a % 2) == 1)
	{
	  printf("Odd number : %d\n", a);
	}
	else
	{
	  printf("even number : %d\n", a);
	}
  }
  else
  {
	printf("The entered value is 0.\n");
  }
  if (b > 0)
  {
	if ((b % 2) == 1)
	{
	  printf("Odd number : %d\n", b);
	}
	else
	{
	  printf("even number : %d\n", b);
	}
  }
  else
  {
	printf("The entered value is 0\n");
  }

  return 0;
}