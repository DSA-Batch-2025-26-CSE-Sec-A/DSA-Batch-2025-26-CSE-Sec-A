#include <stdio.h>
int linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }return -1;
}
int main(){
    int target,result;
    int arr[]={3,45,74,52,65,15};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("enter the target value :");
    scanf("%d",&target);
    result=linear_search(arr,size,target);
    if(result!=-1){
        printf("element found at index :%d\n",result);
     }
     else{
         printf("element not found at index :%d\n",result);
     }
     return 0;
}

