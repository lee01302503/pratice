#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by Prof. Lee
*/
int main(void)
{
  double kg = 0, m = 0;
  double BMI = 0;

  printf("kg, cm : ");
  scanf("%lf%lf",&kg, &m);
  
  m /= 100;

  BMI = kg / (m * m);
  
  if ((20.0 <= BMI) && (BMI < 25.0))
  {
	printf("ǥ���Դϴ�.\n");
  }

  else {
	printf("ü�߰����� �ʿ��մϴ�.\n");

  }
  return 0;

}