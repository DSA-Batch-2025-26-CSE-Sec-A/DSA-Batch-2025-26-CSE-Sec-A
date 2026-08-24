#include<stdio.h>
int main()
{
    int arr[100],i,a;
    printf("Enter elements ");
    scanf("%d",&a);
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a-1;i++)
    {
        arr[i]=arr[i+1];
    }
    a--;
    printf("Array after deleting the first element ");
    for(i=0;i<a;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
