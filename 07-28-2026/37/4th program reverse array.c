#include<stdio.h>
int main()
{
    int arr[10],a,i,temp;
    printf("Enter elements ");
    scanf("%d",&a);
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[a-i-1];
        arr[a-i-1]=temp;
    }
    printf("Reversed array is ");
    for(i=0;i<a;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
