#include<stdio.h>
main()
{
float l,b,r,rar,rpt,car,ccf;
printf("Enter length, breadth, radius:");
scanf("%f %f %f", &l,&b,&r);
rar= l*b; //area of rectangle
rpt= 2*(l+b); //perimeter of rectangle
car= 3.14*r*r; //area of circle
ccf= 3.14*2*r; //perimeter of circle
printf("area of rectangle, perimeter of rectangle, area of circle, circumference of circle = %f, %f, %f, %f", rar, rpt, car, ccf);
}
