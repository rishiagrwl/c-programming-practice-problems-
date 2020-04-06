#include<stdio.h>
int main()
{
int arr[10], i,c=0,c1=0;
printf("Enter 10 elements\n");
for (i=0; i<10; i++)
scanf("%d",&arr[i]);
for (i=0; i<10; i++)
{if(c<arr[i])
c=arr[i];
}
for(i=0; i<10; i++)
{
if(c1<=arr[i] && arr[i]<c)
c1 = arr[i];
}
printf("The second largest element is = %d",c1);
return 0;
}


