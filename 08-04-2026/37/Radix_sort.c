#include<stdio.h>
int getMax(int arr[],int a)
{
    int i,max=arr[0];
    for(i=1;i<a;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

void countSort(int arr[],int a,int exp)
{
    int output[100],count[10]={0};
    int i;
    for(i=0;i<a;i++)
    {
        count[(arr[i]/exp)%10]++;
    }
        for(i=1;i<10;i++)
        {
            count[i]+=count[i-1];
        }
        for(i=a-1;i>=0;i--)
        {
            output[count[(arr[i]/exp)%10]-1]=arr[i];
            count[(arr[i]/exp)%10]--;
        }
        for(i=0;i<a;i++)
        {
            arr[i]=output[i];
        }
}


int main()
{
    int arr[100],a,i,max,exp;
    printf("Enter number of elements ");
    scanf("%d", &a);
    printf("Enter elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d", &arr[i]);
    }
    max=getMax(arr,a);
    for(exp=1;max/exp>0;exp*=10)
    {
        countSort(arr,a,exp);
    }
    printf("Sorted array is ");
    for(i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
