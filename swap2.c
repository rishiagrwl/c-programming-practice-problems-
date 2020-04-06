#include<stdio.h>
main()
{
float a,b;
printf("Enter two nos. =");
scanf("%f %f", &a, &b);
a = a+b;
b = a-b;
a = a-b;
printf("Swap of the nos.= %f %f", a,b);
}
