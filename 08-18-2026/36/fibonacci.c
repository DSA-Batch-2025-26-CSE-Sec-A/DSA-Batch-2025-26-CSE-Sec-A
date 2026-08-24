#include<stdio.h>
int fibo(int a){
   if(a==1)  return 1;
   if(a==0)  return 0;
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int n;
    printf("Enter A Number :");
    scanf("%d",&n);
    printf("%d", fibo(n));
}