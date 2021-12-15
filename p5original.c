#include<stdio.h> 
int small(int a, int b)
{
  if(a<b)
{
  printf("small  is a ");
  return a;
}
else{
  return b;
}
}
int small(int a,int b)
{
  return a<b?a:b;
}
int main( int a,int b)
{
  printf("enter two numbers\n");
  scanf("%d %d",&a,&b);
}