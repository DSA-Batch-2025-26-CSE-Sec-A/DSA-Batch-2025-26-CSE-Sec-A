#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array that needs to be sorted\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int exp=1;max/exp>0;exp=exp*10)
    {
        int count[10]={0};
        int output[n];
        for(i=0;i<n;i++)
        {
            count[(a[i]/exp)%10]++;
        }
        for(i=1;i<10;i++)
        {
            count[i]=count[i]+count[i-1];
        }
        for(i=n-1;i>=0;i--)
        {
            output[count[(a[i]/exp)%10]-1]=a[i];
            count[(a[i]/exp)%10]--;
        }
        for(i=0;i<n;i++)
        {
            a[i]=output[i];
        }
    }
    printf("\n sorted array ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
