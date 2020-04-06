#include<stdio.h>
main()
{
int x,a,d,y;
printf("Enter 4-digit no.");
scanf("%d", &x);
a = x%10;
d = x/1000;
y = a+d;
printf("Sum of first and last digits = %d", y);
}

