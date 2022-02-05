#include<stdio.h>
float input()
{
  float x;
  printf("enter the no:\n");
  scanf("%f",&x);
  return x;
}
float my_sqrt(float n)
{
  float sqr,temp;
  sqr=n/2;
  temp=0;
  while(sqr!=temp)
  {
    temp=sqr;
    sqr=(temp+n/temp)/2;

  }
  return sqr;
}
void output(float n,float sqr)
{
  printf("square root of %f is %f\n",n,sqr);
}
int main()
{
  float n,sqrt;
  n=input();
  sqrt=my_sqrt(n);
  output(n,sqrt);
  return 0;
}