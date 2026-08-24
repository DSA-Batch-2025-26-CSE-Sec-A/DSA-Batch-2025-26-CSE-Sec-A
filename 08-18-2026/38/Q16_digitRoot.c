#include<stdio.h>
int digitSum(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+digitSum(n/10);
}
int digitRoot(int n){
    if(n<10){
        return n;
    }
    int doDigitSum= digitSum(n);
    return digitRoot(doDigitSum);

}
int main(){
    int n;
    printf("Enter number to find their digit sum and root sum: ");
    scanf("%d",&n);
    printf("Their digit sum and root sum are: %d  %d",digitSum(n),digitRoot(n));
    return 0;
}

