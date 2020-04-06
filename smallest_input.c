//prints smallest no. from input nos.
#include<stdio.h>
main()
{
float n,min=+3.4E+38;
char c;
printf("Enter a no. ");
scanf("%f",&n);
do
{
n<min?min=n:printf("Want to enter more no.(y/n)= ");
scanf("%c",&c);
}while(c=='y');
printf("Min = %f",min);
}
