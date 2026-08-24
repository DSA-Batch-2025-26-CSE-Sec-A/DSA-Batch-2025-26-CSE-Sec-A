#include<stdio.h>
int getting_max(int arr[50], int n){
    int i, max= arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
}

void count_sorting(int arr[],int n, int exp){
    int output[n],count[10]={0},i,digit;
    for(i=0;i<n;i++){
        digit=(arr[i]/exp)%10;
        count[digit]++;
    }
    for(i=1;i<10;i++){
        count[i]+= count[i-1];
    }
    for(i=n-1;i>=0;i--){
        digit=(arr[i]/exp)%10;
        output[count[digit]-1]= arr[i];
        count[digit]--;
    }
    for(i=0;i<n;i++){
        arr[i]= output[i];
    }

}
void radix_sort(int arr[50],int n){
    int m= getting_max(arr,n),exp;
    for(exp=1;m/exp>0;exp*=10){
        count_sorting(arr,n,exp);
    }
}





int main(){
    int arr[50],n,i;
    printf("Enter number of element your array will have for radix sort:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
    radix_sort(arr,n);
    printf("The sorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
