#include<stdio.h>
int sum_of_series(int n);
int main(){
    int n;
    printf("Enter:");
    scanf("%d",&n);
    printf("\n%d",sum_of_series(n));
    return 0;

}
int sum_of_series(int n){
    if(n==1){
        return 1;
    }
    return n+sum_of_series(n-1);
}