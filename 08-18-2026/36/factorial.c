#include<stdio.h>
int fact(int a){
    if(a==0)  return 1;
    return a*fact(a-1);
}
int main(){
    int n;
    printf("Enter A Number :");
    scanf("%d",&n);
    printf("%d", fact(n));
}