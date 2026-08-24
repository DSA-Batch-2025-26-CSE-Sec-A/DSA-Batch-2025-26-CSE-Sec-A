//bubble sort
#include <stdio.h>
int main() {
 int A[]={41,60,52,24,10};
 int max_index=(sizeof(A)/sizeof(int))-1;
 int i,t,n,j;
 n=max_index;
 for(j=max_index;j>=0;j--){
 for(i=0;i<n;i++){
    if(A[i]>A[i+1]){
        t=A[i+1];
        A[i+1]=A[i];
        A[i]=t;
    }
    // if(i==n-1){
    //     i=0;
    //     n=n-1;
    // }
    
 }
}

  for(i=0;i<=max_index;i++){
      printf("%d ",A[i]);
  }

    return 0;
}