#include<stdio.h>
int bs(int b[], int h, int key, int l)
{
    int m,i=0;
    while(h>=l)
    {
        m=(l+h)/2;
        if(b[m]==key)
        {
         i=1;
         break;
        }
        else if(b[m]<key)
        l=m+1;
        else
        h=m-1;
    }
    if(i==1)
    return 1;
    else
    return -1;
}


main()
{
    int arr[10],i,j,k,n,s,r;
    printf("Enter no. of elements for the array-\n");
    scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d", &arr[i]);
for(i=0; i<n; i++)
for(j=0; j<n-i-1; j++)
{
if(arr[j]>arr[j+1])
{
k=arr[j+1];
arr[j+1]=arr[j];
arr[j]=k;
}
}
printf("Enter the element to be searched-\n");
scanf("%d",&s);
r=bs(arr,n-1,s,0);
if(r==-1)
printf("Element is not present");
else
printf("Element is present");
}


