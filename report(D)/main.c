#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  char fruit[40];
  int cnt;

  printf("Favorite fruit : ");
  scanf("%s", fruit);
  printf("How many : ");
  scanf("%d", &cnt);
  printf("%d %s give.", cnt, fruit);
  return 0;
}