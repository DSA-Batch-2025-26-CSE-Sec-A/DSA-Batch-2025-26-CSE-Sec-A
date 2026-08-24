#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the area");
    scanf("%d,&n");
    int a[n];
    printf("Enter the element of the array that neads to be sorted");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("\n sorted array");
    for(int i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
    }