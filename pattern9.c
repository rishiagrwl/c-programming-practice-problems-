// for 4 rows
// x x x x
// x     x
// x     x
// x x x x
#include <stdio.h>
main()
{int n,i,j;
printf("Enter no. of rows = ");
scanf("%d", &n);
for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
        if(i==1 || i==n)
        {printf("x ");}
        else {
            if(j==1 || j==n)
            {printf("x ");}
            else
            {printf("  ");}}}
        printf("\n");}}
