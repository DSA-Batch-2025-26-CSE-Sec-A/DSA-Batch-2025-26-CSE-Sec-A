#include<stdio.h>
int febo(int n);
int main(){
    int n;
    printf("Enter:");
    scanf("%d",&n);
    printf("\n%d",febo(n));
    return 0;

}
int febo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return febo(n-1)+febo(n-2);
}