#include<stdio.h>
int prime(int);
main()
{
int n,p;
printf("Enter a no.");
scanf("%d", &n);
prime(n);
}
int prime(int x)
{
int i;
for(i=2; i<=x; i++)
{
if(x%i==0)
break;
}
if(i==x)
printf("It's a prime no.");
else
printf("It's not a prime no.");
}

