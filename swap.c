#include<stdio.h>
main()
{
float a,b,c;
printf("a,b =");
scanf("%f %f",&a,&b);
c = a;
a = b;
b = c;
printf("a,b = %f %f", a,b);
}


