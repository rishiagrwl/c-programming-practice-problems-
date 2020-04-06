//print reverse of a no.
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
y = a*10000 + b*1000 + c*100 + d*10 + e;
printf("reverse of the no. = %d", y);
}
