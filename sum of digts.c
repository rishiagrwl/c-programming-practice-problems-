#include<stdio.h>
main()
{
int x,a,b,c,d,e,y;
printf("Enter 5-digit no.");
scanf("%d", &x);
a = x%10;
b = (x%100)/10;
c = (x%1000)/100;
d = (x%10000)/1000;
e = x/10000;
y = a+b+c+d+e;
printf("Sum of digits = %d", y);
} 

