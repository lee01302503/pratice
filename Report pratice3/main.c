#include <stdio.h>
/* made by Prof. Lee
*/
int main(void)
{
  int a = 0, b = 0;

  printf("a, b =");
  scanf("%d%d", &a, &b);
  printf("Plus = %d\n", a + b);
  printf("Minus = %d\n", a - b);
  printf("Mult = %d\n", a * b);
  printf("Inv %.4lf\n", ((double)a / (double)b));
  printf("Rem = %d\n", a % b);
	
  return 0;
}