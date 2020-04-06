#include <stdio.h>
main ()
{
int a;
printf("Enter the year");
scanf("%d",&a);
if (a<0)
{
printf("Incorrect year");
}
else
{
if ((a%4)==0)
{
printf("This is a leap year");
}
else
{
printf("This is not a leap year");
}
}
}
