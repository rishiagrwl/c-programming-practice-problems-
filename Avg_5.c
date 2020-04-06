//calculate average of 5 numbers
#include<stdio.h>
main()
{
int a,b,c,d,e,avg ;
printf("Enter the numbers");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
avg= (a+b+c+d+e)/5;
printf("Average = %d", avg);
}
