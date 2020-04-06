#include<stdio.h>
main()
{
int n,i,j,k,x=1;
printf("Enter no. of rows = ");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
 for(j=i;j<=n;j++)
 printf(" ");
 for(k=0;k<=i;k++)
 {
 if(i==0 || k==0)
 x=1;
 else
 x=x*(i-k+1)/k;
 printf("%d ",x);
 }
 printf("\n");
 }
}
