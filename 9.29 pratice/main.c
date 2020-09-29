#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  int a;

  do
  {
	printf("intger number : ");
	scanf("%d", &a);
  } while (a < 0);
  printf("%d > 0\n", a);

  return 0;
}