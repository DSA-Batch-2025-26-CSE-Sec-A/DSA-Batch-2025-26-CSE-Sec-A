#include<stdio.h>
int main()
{
    int arr[5]={72,95,102,105,110};
    int key,i;
    printf("Enter element to search ");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at %d ",i+1);
            return 0;
        }
    }
    printf("Element not found ");
    return 0;
}
