#include<stdio.h>
int input()
{
  int x;
  printf("enter the three no\n");
  scanf("%d",&x);
  return x;

}
int cmp(int a,int b,int c)
{
  int largest;
  if(a>b && a>c)
  largest =a;
  else if(b>a && b>c)
  largest =b;
  else
  largest =c;
  return largest;
}
void output(int a,int b,int c,int large)
{
  printf("largest of three no.%d %d %d is %d",a,b,c,large);
}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  output(a,b,c,large);
  return 0;
}