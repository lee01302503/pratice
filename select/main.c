#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SYLEE 1 
#define CJU 2 
#define JEKIM 3 
/* made by Prof. Lee
*/
int main(void)
{
  int a = 0;
  int m = 0;

  printf("please inout the integer number : ");
  scanf("%d", &a);

  switch (a)
  {
  case SYLEE :
	m = 300;
	break;
  case CJU :
	m = 200;
	break;
  case JEKIM : 
	m = 100;
	break;
  default :
	m = 10;
	break;
  }

  printf("m : %d\n", m);
  return 0;
}