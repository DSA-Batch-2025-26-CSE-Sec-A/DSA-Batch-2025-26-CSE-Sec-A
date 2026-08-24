//Radix sort
#include <stdio.h>
int main() {
 int A[]={1,60,56,786,43,678,98,564,342,870};
 int max_index=(sizeof(A)/sizeof(int))-1;
 int B[max_index+1];
 int i,n,j,k,l,m,t,d,x;
 k=0;
 m=1;
 n=10;
 j=0;
 d=0;
 int max=A[0];
 for(i=1;i<=max_index;i++){
    if(max<A[i]){
        max=A[i];
    }
}
x=max;
while(x>0){
    d++;
    x=x/10;
}

    for(l=1;l<=d;l++){
        for(i=0;i<=9;i++){
            while(j<=max_index){
                if(i==(A[j]/m)%n){
                    B[k]=A[j];
                    k++;
                    
                }
                
                j++;
            }
            j=0;   
        }
        for(i=0;i<=max_index;i++){
            A[i]=B[i];
        }
        k=0;
        m=m*10;
    }
  for(i=0;i<=max_index;i++){
      printf("%d\n",B[i]);
  }
}

  
