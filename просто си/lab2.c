# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
  int i,x,b;
  float y;
  int c[7]={1,2,3,4,5,6,7};
  printf("Введите х: ");
  scanf("%i",&x);
  y=c[0];
  printf("y= %f\n",y);
  for(i=1;i<7;i++)
  {
    b=pow(x,i);
    y=b+c[i];
    printf("y= %f\n",y);
  }
  y=pow(x,7);
  printf("y= %f\n",y);
  return 0;
}
