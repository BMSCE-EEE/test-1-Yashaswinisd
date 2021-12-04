#include<stdio.h>
int sum (int,int);
int main()
{
  int a,b;
  printf("enter two numbers\n");
  scanf("%d %d",&a,&b);
  printf("%d +%d=%d\n",a,b,sum(a,b));
  return 0;
}
int sum(int a,int  b)
{
  int c;
  c=a+b;
  return c;
}
