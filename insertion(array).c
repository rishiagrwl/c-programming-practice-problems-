//insert an element in array
#include<stdio.h>
main()
{
int arr[11], i,j,k,n, a;
printf("Enter 10 elements\n");
for(i=0; i<10; i++)
scanf("%d", &arr[i]);
printf("Enter the element to insert and its position= \n");
scanf("%d %d", &n,&a);
if(a<=10 && a>=1)
{
a=a-1;
printf("Now, the elements are-\n");
for(i=10; i>a; i--)
arr[i]=arr[i-1];
arr[a]=n;
for(i=0; j<11; j++)
printf("%d\n", arr[j]);
}
else
printf("The position should be between 1 to 10");
}


