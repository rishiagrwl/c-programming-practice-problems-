//for 3 rows
// 1
// 1 4
// 1 4 9
#include <stdio.h>
main()
{int n,i,j;
printf("Enter no. of rows = ");
scanf("%d", &n);
for(i=1; i<=n; i++){
for(j=1; j<=i; j++)
{printf("%d ",j*j);}
printf("\n");}}
