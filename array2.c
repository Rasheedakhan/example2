/* To find max and min element in an array */

#include<stdio.h>
int main()
{
    int n,i,min,max;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
       if(arr[i]<min)
       {
        min=arr[i];
       }
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
    if(arr[i]>max)
    {
    max=arr[i];
    }
    }
    printf("The max element is %d\n",max);
    printf("The min element is %d\n",min);
}
