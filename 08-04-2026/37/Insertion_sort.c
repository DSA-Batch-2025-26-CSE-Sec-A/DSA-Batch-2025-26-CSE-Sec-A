#include<stdio.h>
int main()
{
    int a,i,j,c;
    printf("Enter number of elements ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<a;i++)
    {
       c=arr[i];
       for(j=i-1;j>=0;j--)
       {

           if(arr[j]>c)
           {
               arr[j+1]=arr[j];
           }
           else
           {
               break;
           }
       }
       arr[j+1]=c;
    }
    printf("Sorted array is ");
    for(i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
