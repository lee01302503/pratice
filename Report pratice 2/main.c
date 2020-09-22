#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Notdivisor 1
#define divisor 0
/* made by Prof. Lee
*/
int main(void)
{
  int a, b;
  int res = 0;

  printf("intger : ");
  scanf("%d%d", &a, &b);
  res = (b % a);

  switch (res)
  {
  case divisor:
	printf("%d는 %d의 약수이다.\n", a, b);
	break;
  default:
	printf("%d는 %d의 약수가 아니다.\n", a, b);
	break;
  }
  return 0;
}