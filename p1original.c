#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter the two numbers\n");
  scanf("%d %d",a,b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("addition of two numbers %d+%d is %d\n",a,b,sum);
}
int main()
{
  int a,b,c,ans;
   input(&a,&b);
   add(a,b,&ans);
  output(a,b,ans);
  return 0;
}