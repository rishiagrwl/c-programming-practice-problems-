//prints basic sequence 12345...
#include <stdio.h>
main()
{
int n,i;
printf("Enter the no. upto which you want the sequence");
scanf("%d", &n);
for(i=1; i<=n; i++)
{
printf("%d, ", i);
}
}
