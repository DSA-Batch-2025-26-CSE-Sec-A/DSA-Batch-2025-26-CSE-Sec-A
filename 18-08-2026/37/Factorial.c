#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Factorial is %d",factorial(a));
    return 0;
}
