#include<stdio.h>
#include<math.h>
int main()
{
  float x1,x2,y1,y2,d;
  printf("enter the coordinates of point 1\n");
  scanf("%f%f",&x1,&y1);
  printf("enter the coordinates of point 2\n");
  scanf("%f%f",&x2,&y2);
  d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("distance between %f%f and %f%f is %f\n",x1,x2,y1,y2,d);
  return 0; 
}