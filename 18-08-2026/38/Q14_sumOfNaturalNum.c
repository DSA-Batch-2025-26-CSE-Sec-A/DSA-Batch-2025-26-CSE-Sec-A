#include<stdio.h>
int sumNaturalNum(int n){
    if(n==0){
        return 0;
    }
    int sum=n+sumNaturalNum(n-1);
    return sum;
}

int main(){
    int n;
    printf("Enter number to find their sum: ");
    scanf("%d",&n);
    printf("Their sum is: %d ",sumNaturalNum(n));
    return 0;
}
