// for 3 rows
// C B A
// B A
// A
#include <stdio.h>
main()
{int n,i,j;
char c = 'A';
printf("Enter no. of rows = ");
scanf("%d", &n);
for(i=1; i<=n; i++){
for(j=i; j<=n; j++)
{printf("%c ", n+c-j);}
printf("\n");}}
