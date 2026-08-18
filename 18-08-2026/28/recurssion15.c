#include<stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibo=fibonacci(n-2)+fibonacci(n-1);
    return fibo;
}

int main(){
    int n,i;
    printf("Enter number to find their fibonacci series: ");
    scanf("%d",&n);
    printf("The fibonacci series till %d places is: ",n);
    for(i=0;i<n;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}