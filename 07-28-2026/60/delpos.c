#include<stdio.h>
int main()
{
    int n,i,pos;
    printf("Enter size: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the position to be deleted : ");
    scanf("%d",&pos);
      for(i=pos;i<n-1;i++){
            ar[i]=ar[i+1];
          }
        n--;
        printf("new array : ");
        for(i=0;i<n;i++){
            printf("%d ",ar[i]);
        }
}
