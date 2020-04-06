//calculate distance between two points
#include<stdio.h>
#include<math.h>

void main()
{
float x1, x2, y1, y2, a, d;
printf("enter two points =");
scanf("%f %f, %f %f", &x1,&y1,&x2,&y2);
a = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
d = sqrt(a);
printf("distance between the points = %f", d);
}
