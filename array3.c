/* To find largest and second largest element */

#include<stdio.h>
int main()
{
    int n,i,large=0,s_large=0;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
          s_large=large;
          large=arr[i];
        }
    else if(arr[i]>s_large && arr[i]<large)
        {
            s_large=arr[i];
        }
    }
    printf("The largest number is %d\n",large);
    printf("The second largest number is %d",s_large);
}
