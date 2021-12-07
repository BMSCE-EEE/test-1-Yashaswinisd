#include<stdio.h>
float input();
float large ( float a,float b, float c);
void display(float max);
int main()
{
  float x, y,z, largest;
  x= input();
  y=input();
  z=input();
  largest =large(x, y,z);
  display(largest);
  return 0;
} 
float input()
{
  float n;
  printf("enter number\n:");
  scanf("%f ",&n);
  return n;
}
float large (float a,float b ,float c)
{
  if (a>=b && a>c) return a;
  else if (b>=a && b>=c)return c;
  else return c;
}
void display (float max)
{
  printf("largest number = %.2f",max);
}