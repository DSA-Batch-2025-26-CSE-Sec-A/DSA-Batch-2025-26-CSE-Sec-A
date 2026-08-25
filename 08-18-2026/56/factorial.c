#include<stdio.h>
long long int factorial(long long int n){
    if(n==1){
        return 1;
    }
    long long int fact=n*factorial(n-1);
    return fact;
}

int main(){
    int n;
    printf("Enter number to find factorial: ");
    scanf("%d",&n);
    printf("The factorial of %d is: %lld ",n,factorial(n));
    return 0;
}