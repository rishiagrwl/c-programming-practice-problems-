//find largest element of array
#include<stdio.h>
int main()
{
int arr[10], i,c=0;
printf("Enter 10 elements\n");
for (i=0; i<10; i++)
scanf("%d",&arr[i]);
for (i=0; i<10; i++)
{if(c<arr[i])
c=arr[i];
}
printf("The largest element is = %d",c);
return 0;
}


