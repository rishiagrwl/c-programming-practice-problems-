#include<stdio.h>
main()
{
int m1[2][2], m2[2][2], mm[2][2], i,j;
printf("Enter elements for first 2x2 matrix-\n");
for(i=0; i<2; i++)
{
for(j=0; j<2; j++)
scanf("%d", &m1[i][j]);
}
printf("Enter elements for second 2x2 matrix-\n");
for(i=0; i<2; i++)
{
for(j=0; j<2; j++)
scanf("%d", &m2[i][j]);
}
printf("So, elements of first 2x2 matrix-\n");
printf("%d %d \n%d %d\n", m1[0][0], m1[0][1],m1[1][0],m1[1][1]);
printf("So, elements of second 2x2 matrix-\n");
printf("%d %d \n%d %d\n", m2[0][0], m2[0][1],m2[1][0],m2[1][1]);
printf("Matrix multiplication gives - \n");
for(i=0; i<2; i++)
{
for(j=0; j<2; j++)
mm[i][j] = m1[i][j]*(m2[0][j] + m2[1][j]);
}
printf("%d %d \n%d %d\n", mm[0][0], mm[0][1],mm[1][0],mm[1][1]);
}
