#include<stdio.h>
main()
{
float p, r, t, i;
printf("Principal amount, Rate of interest(per annum), Time(in years)");
scanf("%f %f %f", &p, &r, &t);
i=(p*r*t)/100;
printf("Interest = %f", i);
}
