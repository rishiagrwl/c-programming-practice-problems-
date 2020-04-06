//deleting an element of array
#include<stdio.h>
main()
{
int arr[10], i,j,k, a;
printf("Enter 10 elements\n");
for(i=0; i<10; i++)
scanf("%d", &arr[i]);
printf("Enter the element to delete \n");
scanf("%d", &a);
for(i=0; i<10; i++)
{
if(arr[i]==a)
{
printf("Now, the elements are-\n");
for(k=0; k<i; k++)
printf("%d\n",arr[k]);
for(j=i; j<9; j++)
{arr[j]=arr[j+1];
printf("%d\n", arr[j]);
}
break;
}
else if (i==9)
printf("The element is not there in the original list");
}
}



