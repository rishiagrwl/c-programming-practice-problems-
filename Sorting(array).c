#include<stdio.h>
main()
{
int arr[10],i,j,k;
printf("Enter 10 elements\n");
for(i=0;i<10;i++)
scanf("%d", &arr[i]);
for(i=0; i<9; i++)
for(j=0; j<9-i; j++)
{
if(arr[j]>arr[j+1])
{
k=arr[j+1];
arr[j+1]=arr[j];
arr[j]=k;
}
}
printf("Now, the sorted elements are-\n");
for(i=0; i<10; i++)
printf("%d\n", arr[i]);
}

