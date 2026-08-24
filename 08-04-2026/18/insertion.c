#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array that needs to be sorted\n ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        int k=a[i];
        int j=i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    printf("\n sorted array ");
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}