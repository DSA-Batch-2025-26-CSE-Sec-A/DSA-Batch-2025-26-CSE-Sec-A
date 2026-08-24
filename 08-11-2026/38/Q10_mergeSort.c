#include<stdio.h>
void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1= mid-left+1;
    int n2= right-mid;
    int temp_l[n1],temp_r[n2];
    for(i=0;i<n1;i++){
        temp_l[i]= arr[left+i];
    }
    for(j=0;j<n2;j++){
        temp_r[j]= arr[mid+1+j];
    }
    i=0;
    j=0;
    k=left;

    while(i<n1 && j<n2){
        if(temp_l[i]<=temp_r[j]){
            arr[k]=temp_l[i];
            i++;
        }else{
            arr[k]=temp_r[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]= temp_l[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]= temp_r[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right){
    if(left<right){
        int mid= left+(right-left)/2;
        mergeSort(arr,left,mid);//for first halves
        mergeSort(arr,mid+1,right);//for second halves
        merge(arr,left,mid,right);
    }
}

int main(){
    int arr[50],n,i;
    printf("Enter number of elements your array will have for merge sort: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    printf("The sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
