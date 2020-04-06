//prints marksheet
#include <stdio.h>
main()
{
float id,m1,m2,m3,m4,m5,p;
char n,g;
printf("Enter Name, Id(last 4 digits), Marks of 5 subjects(each out of 100)");
scanf("%c %f %f %f %f %f %f", &n, &id, &m1, &m2, &m3, &m4, &m5);
p=(m1+m2+m3+m4+m5)/5;
if(p>=80)
{
g= 'A';
}
else
{
if(p>=60)
{
g='B';
}
else
{
if(p>=40)
{
g='C';
}
else
{
g='F';
}
}
}
printf("Name=%c, Id=%f, Percentage=%f, grade=%c",n,id,p,g);
}

