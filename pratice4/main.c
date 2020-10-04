#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  int n, i, j;
  int pn;//prime number
  int cnt = 0;// count

  printf("Please enter an integer greater than 2 : ");
  scanf("%d", &n);

  if (2 <= n)// input number greater than 2.
  {
	for (i = 2; i < n; i++)
	{
	  pn = 1; // prime number
	  for (j = 2; j < i; j++)
	  {
		if ((i % j) == 0) // not prime number
		{
		  pn = 0;
		  break;
		}
	  }
	  if (pn == 1)
	  {
		printf("%5d", i);// 5 spaces up
		cnt++;
		if ((cnt % 5) == 0)
		{
		  printf("\n"); // cell replacement
		}
	  }
	}
  }
  else
  {
	printf("error input number...");
  }
  return 0;
}