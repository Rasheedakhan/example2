/* To find the sum of array */

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float avg;
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
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("The sum of elements is %d\n",sum);
    printf("The average of elements is %.2f",avg);
}
