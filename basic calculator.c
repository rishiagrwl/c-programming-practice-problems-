#include <stdio.h>
main()
{
float a,b;
char c;
printf("Enter the operation and two nos.");
scanf("%f %c %f", &a,&c,&b);
if(c=='+')
{
printf("%f", a+b);
}
if(c=='-')
{
printf("%f", a-b);
}
if(c=='*')
{
printf("%f", a*b);
}
if(c=='/')
{
printf("%f", a/b);
}
}
