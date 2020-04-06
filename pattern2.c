// for 3 rows
//   *
//  * *
// * * *
//  * *
//   *
#include <stdio.h>
main()
{int n,i,j,k,l,m,o;
printf("Enter no. of rows = ");
scanf("%d", &n);
for(i=1; i<=n; i++){
for(j=i; j<=n; j++)
{printf(" ");}
for(k=1; k<=i; k++){
printf("* ");}
printf("\n");}

for(l=1;l<n;l++){
for(m=0;m<=l;m++)
{printf(" ");}
for(o=l;o<n;o++)
{
    printf("* ");
}printf("\n");
}}
