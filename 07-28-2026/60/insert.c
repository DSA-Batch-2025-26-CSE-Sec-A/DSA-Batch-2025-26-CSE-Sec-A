#include<stdio.h>
int main()
{
    int n,i,key,pos;
    printf("Enter the size: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }    
    printf("Enter the position to insert : ");
    scanf("%d",&pos);
    printf("Enter the element : ");
    scanf("%d",&key);
    for(i=n;i>=pos-1;i--){
        ar[i+1]=ar[i];
    }
    ar[pos-1]=key;
    n++;
    printf("The new array : ");
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}
