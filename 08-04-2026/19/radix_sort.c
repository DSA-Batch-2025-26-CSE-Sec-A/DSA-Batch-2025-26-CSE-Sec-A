#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max=arr[0];
    for(i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    for(int exp=1;max/exp>0;exp=exp*10)
    {
        int count[10]={0};
        int output[n];
        for(i=0;i<n;i++)
            count[(arr[i]/exp)%10]++;
        for(i=1;i<10;i++)
            count[i]=count[i]+count[i-1];
        for(i=n-1;i>=0;i--)
        {
            output[count[(arr[i]/exp)%10]-1]=arr[i];
            count[(arr[i]/exp)%10]--;
        }
        for(i=0;i<n;i++)
            arr[i]=output[i];
    }
    printf("\n sorted array ");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    return 0;
}