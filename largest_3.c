//find largest among 3 nos.
#include <stdio.h>
main ()
{
float a,b,c;
printf("Enter 3 nos.");
scanf("%f %f %f", &a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("%f is largest", a);
}
else
{
printf("%f is largest", c);
}
}
else
{
if(b>a)
{
if(c>b)
{
printf("%f is largest", c);
}
else
{
printf("%f is largest", b);
}
}
else
{
if(a>c)
{
printf("%f is largest", a);
}
else
{
printf("%f is largest", c);
}
}
}
}
