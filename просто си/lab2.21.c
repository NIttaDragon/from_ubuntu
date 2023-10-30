# include <stdio.h>
# include <stdlib.h>
# include <math.h>
#include "zagfile.h"

int main()
{
  float x1,x2,y1,y2,sum;
  int i;
  float l=0.1;
  float sumper=0;
  double *s = (double*)malloc(35*sizeof(double));
  x1=-1.8; x2=x1+l;//первый участок функции
  for(i=0;i<8;i++)
  {
    y1=x1+1; y2=x2+1;
    s[i]=func(fabs(y1),fabs(y2));
    x1=x1+l;x2=x2+l;
    sumper=sumper+s[i];
  }
  sum=sum+sumper;
  printf("sum1= %f\n",sumper);
  x1=-1;x2=x1+l;//второй участок функции
  for(i=8;i<27;i++)
  {
    y1=pow(x1,2); y2=pow(x2,2);
    s[i]=func(y1,y2);
    x1=x1+l;x2=x2+l;
    sumper=sumper+s[i];
  }
  sum=sum+sumper;
  printf("sum2= %f\n",sumper);
  x1=1;x2=x1+l;//третий участок функции
  for(i=27;i<35;i++)
  {
    y1=atan(x1); y2=atan(x2);
    s[i]=func(y1,y2);
    x1=x1+l;x2=x2+l;
    sumper=sumper+s[i];
  }
  sum=sum+sumper;
  printf("sum3= %f\n",sumper);
  printf("sum= %f\n",sum);
  free(s);
  return 0;
}
