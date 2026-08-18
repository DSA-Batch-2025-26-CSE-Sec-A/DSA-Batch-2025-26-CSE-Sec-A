#include<stdio.h>
int sum(int a){
    if(a==0)  return 0;
    return a+sum(a-1);
}
int main(){
    int n;
    printf("Enter A Number :");
    scanf("%d",&n);
    printf("%d", sum(n));
}