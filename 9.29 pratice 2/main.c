#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/

double average(double A, double B);

int main(void)
{
  double A = 0;
  double B = 0;

  printf("input number : ");
  scanf("%lf%lf", &A, &B);

  double result;
  result = average(A, B);

  printf("result : %.1lf\n", result);

  system("pause..");
  return 0;
}

double average(double A, double B)
{
  return  ((A + B)/2);
}