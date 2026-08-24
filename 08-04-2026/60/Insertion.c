//Insertion sort
#include<stdio.h>
int main(){
    int A[]={33,1,34,50,45,29,48,5};
    int i,j,t;
    int max_index=(sizeof(A)/sizeof(int))-1;
    for(i=1;i<=max_index;i++){
        for(j=i;j>=0;j--){
            if(A[j]>A[j+1]){
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    for(i=0;i<=max_index;i++){
      printf("%d\n",A[i]);
    }
}
