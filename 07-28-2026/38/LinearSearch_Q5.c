#include<stdio.h>

int main(){
    int arr[20],key,n,i,find=0;
    printf("Enter how many elements the array will have:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter which element you want to find:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Number found at %d",i);
            find=1;
            break;
        }
    }
    if(find==0){
            printf("Element NOT found");
        }
    return 0;
}


