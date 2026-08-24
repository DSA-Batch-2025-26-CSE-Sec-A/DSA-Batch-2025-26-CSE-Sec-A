#include<stdio.h>
int main()
{
    int n,i,pos;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to be deleted : ");
    scanf("%d",&pos);
      for(i=pos;i<n-1;i++){
            arr[i]=arr[i+1];
          }
        n--;
        printf("new array : ");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    
    return 0;
}
