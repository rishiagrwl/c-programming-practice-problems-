// for 3 rows
//   1
//  2 2
// 3 3 3
#include <stdio.h>
main()
{int n,i,j,k;
printf("Enter no. of rows = ");
scanf("%d", &n);
for(i=1; i<=n; i++){
for(j=i; j<=n; j++)
{printf(" ");}
for(k=1; k<=i; k++){
printf("%d ",i);}
printf("\n");}}
