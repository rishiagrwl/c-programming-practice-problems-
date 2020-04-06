//for 5 rows
//*****
//****
//***
//**
//*
#include <stdio.h>
main()
{
int n,i,j;
printf("Enter the no. upto which you want the sequence");
scanf("%d", &n);
for(i=1; i<=n; n--)
{
for(j=1; j<=n; j++)
  {
   printf("*");
  }
printf("\n");
}
}
