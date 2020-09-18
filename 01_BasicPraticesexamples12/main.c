#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  int a, b;
  double res;
  printf("a b : ");
  scanf("%d%d", &a, &b);

  res = ((double)a / (double)b);
  printf("Inv : %.1lf\n", res);


}