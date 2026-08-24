#include<stdio.h>
int main(){
    char A[]="THUNGNASHW";
    int n=sizeof(A)-2;
    for(int i=0;i<=n/2;i++){
        char t=A[i];
        A[i]=A[n-i];
        A[n-i]=t;
    }
    printf("%s",A);
    return 0;
}