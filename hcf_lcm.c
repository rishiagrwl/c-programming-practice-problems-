#include <stdio.h>
main()
{
int a,b,i,c,lcm,hcf;
printf("Enter the nos. of which you want the hcf and lcm");
scanf("%d %d", &a, &b);
if(a>b)
c=b;
else 
c=a;
for(i=1;i<=c;i++)
{if(a%i==0 && b%i==0)
hcf = i;}
lcm=(a*b)/hcf;
printf("lcm = %d, hcf = %d", lcm, hcf);
} 
