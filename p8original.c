#include <stdio.h>
int gcd(int a,int b ,int t)
{
  while(b>0)
  {
    t=b;
    b=a%b;
    a=t;
  }
  return a;
}
int sum_of_digits(int a)
{
  int sum=0;
  while(a!=0){
    sum+=a%10;
    a/=10;
  }
  return sum;
}
