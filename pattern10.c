// for 4 rows
// A
// 1 2
// B C D
// 3 4 5 6
#include <stdio.h>
main()
{int n,i,j,k=1;
char c = 'A';
printf("Enter no. of rows = ");
scanf("%d", &n);
for(i=1; i<=n; i++){
for(j=1; j<=i; j++)
{if(i%2==1)
{printf("%c ", c++);}
else
{printf("%d ", k++);}}
printf("\n");}}
