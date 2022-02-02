#include<stdio.h>
int input()
{
  int n;
  printf("enter the three numbers\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  largest=a;
  else if(b>a && b>c)
  largest=b;
  else
  largest=c;
}
int output(int a,int b,int c,int large2)
{
  printf("largest of three numbers %d %d %d is\n",a,b,c,large2);
}

int main()
{
 int a,b,c,large;
 a=input();
 b=input();
 c=input();
  large=cmp(a,b,c);
int output(a,b,c,large);
return 0;
}